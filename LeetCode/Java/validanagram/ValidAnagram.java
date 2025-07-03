package validanagram;

public class ValidAnagram {
	public static void main(String[] args) {
		Solution sol = new Solution();
		boolean result = sol.isAnagram("anagram", "nagaram");
		System.out.println(result);
	}
}

// https://leetcode.com/problems/valid-anagram
//IMPORTANT!! Submit Code Region Begin(Do not remove this line)
class Solution {
	public boolean isAnagram(String s, String t) {
		if (s.length() != t.length()) {
			return false;
		}

		// s and t consist of lowercase English letters
		int[] arr = new int[26];

		for (int i = 0; i < s.length(); i++) {
			arr[s.charAt(i) - 'a']++;
			arr[t.charAt(i) - 'a']--;
		}

		for (int i = 0; i < 26; i++) {
			if (arr[i] != 0) {
				return false;
			}
		}

		return true;
	}
}
//IMPORTANT!! Submit Code Region End(Do not remove this line)
