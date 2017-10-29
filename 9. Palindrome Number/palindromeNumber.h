/*
 Author:     Deren Lei, derenlei97@gmail.com
 Date:       10/29/2017
 Problem:    Palindrome Number
 Difficulty: Easy
 Source:     https://leetcode.com/problems/palindrome-number/description/

 Question:
 Determine whether an integer is a palindrome. Do this without extra space.
*/


class Solution {
public:
    bool isPalindrome(int x) {
        // Certain conditions that will return false
        if(x < 0 || (x != 0 && x % 10 == 0)) { return false; }
        // Idea: remove medium to last digits of x and copy to a new int. Then compare.
        int y = 0;
        while(x > y){
            y = y * 10 + x % 10;
            x /= 10;
        }
        return(x == y || x == y/10 );
    }
};
