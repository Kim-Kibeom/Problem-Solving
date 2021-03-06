/**
 * 413. Arithmetic Slices
 * https://leetcode.com/problems/arithmetic-slices/
 */

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int sum = 0, count = 0;
         
        for(int i = 2; i < A.size(); i++){
            if(A[i] - A[i-1] == A[i-1] - A[i-2]){
                count++;
            }
            else {
                sum += (count+1)*count/2;
                count = 0;
            }
        }
        return sum + count*(count+1)/2;
    }
};