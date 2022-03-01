/**
 * 338. Counting Bits
 * https://leetcode.com/problems/counting-bits/
 */

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res(num+1, 0);
        
        for(int i = 1; i <= num; i++){
            if(i % 2 == 1) res[i] = res[i-1] + 1;
            else res[i] = res[i/2];
        }
        return res;
    }
};