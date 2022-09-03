// https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(long long int n) {
        if((n & n-1) == 0 & (n % 3 == 1)){
            return true;
        }
        else{
            return false;
        }
    }
};