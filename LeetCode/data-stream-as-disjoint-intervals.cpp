// https://leetcode.com/problems/data-stream-as-disjoint-intervals/

// Save all values in an ordered set

class SummaryRanges
{
	set<int> values;

public:
	SummaryRanges() {}

	void addNum(int value) { values.insert(value); }

	vector<vector<int>> getIntervals()
	{
		if (values.empty())
		{
			return {};
		}
		vector<vector<int>> intervals;
		int left = -1, right = -1;
		for (int value : values)
		{
			if (left < 0)
			{
				left = right = value;
			}
			else if (value == right + 1)
			{
				right = value;
			}
			else
			{
				intervals.push_back({left, right});
				left = right = value;
			}
		}
		intervals.push_back({left, right});
		return intervals;
	}
};

// Maintain all the intervals in ordered map

class SummaryRanges
{
	map<int, int> intervals;

public:
	SummaryRanges() {}

	void addNum(int value)
	{
		int left = value, right = value;
		auto small_entry = intervals.upper_bound(value);
		if (small_entry != intervals.begin())
		{
			auto max_entry = small_entry;
			--max_entry;
			if (max_entry->second >= value)
			{
				return;
			}
			if (max_entry->second == value - 1)
			{
				left = max_entry->first;
			}
		}
		if (small_entry != intervals.end() && small_entry->first == value + 1)
		{
			right = small_entry->second;
			intervals.erase(small_entry);
		}
		intervals[left] = right;
	}

	vector<vector<int>> getIntervals()
	{
		vector<vector<int>> answer;
		for (const auto &p : intervals)
		{
			answer.push_back({p.first, p.second});
		}
		return answer;
	}
};