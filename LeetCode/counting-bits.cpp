// https://leetcode.com/problems/counting-bits/

// Brian Kernighan's Algorithm - https://iq.opengenus.org/brian-kernighan-algorithm/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        int bitCount = 0;
        int currentNum = 0;
        for(int i=0; i<=n; i++){
            currentNum = i;
            while(currentNum){
                currentNum = currentNum & (currentNum-1);
                bitCount++;
            }
            v.push_back(bitCount);
            bitCount = 0;
        }
        return v;
    }
};