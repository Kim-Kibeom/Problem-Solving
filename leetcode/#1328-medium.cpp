/**
 * 1328. Break a Palindrome
 * https://leetcode.com/problems/break-a-palindrome/
 */

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int length = palindrome.size();
        
        if (length == 1) return "";
        
        for (int i = 0; i < length / 2; i++) {
            if (palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        
        palindrome[length - 1] = 'b';
        return palindrome;
    }
};