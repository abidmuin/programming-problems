// https://leetcode.com/problems/longest-uncommon-subsequence-i/

class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a!=b){
            return a.size() > b.size() ? a.size() : b.size();
        }
        else{
            return -1;
        }
    }
};