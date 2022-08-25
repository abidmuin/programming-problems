// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int missingNumber = 0;
        sort(nums.begin(), nums.end()); // for binary_search
        
        for(int i=0; i<=len; i++){
            if(binary_search(nums.begin(), nums.end(), i)){
                continue;
            }
            else{
                missingNumber = i;
                break;
            }
        }
        return missingNumber;
    }
};