// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missingNumber = 0;
        int len = nums.size();
        
        for(int i=0; i<len; i++){
            missingNumber = missingNumber ^ nums[i] ^ (i+1);
        }
        
        return missingNumber;
    }
};
