// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNumber = 0;
        int len = nums.size();
        int total = 0;
        
        for(auto itr = nums.begin(); itr!=nums.end(); itr++){
            total += *itr;
        }
        
        missingNumber = (len*(len+1))/2 - total;
        
        return missingNumber;
    }
};
