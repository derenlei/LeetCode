/*
 Author:     Deren Lei, derenlei97@gmail.com
 Date:       12/8/2017
 Problem:    String to Integer (atoi)
 Difficulty: Medium
 Source:     https://leetcode.com/problems/string-to-integer-atoi/description/

 Question:
 Implement atoi to convert a string to an integer.
*/


class Solution {
    public int myAtoi(String str) {
        int result = 0, sign = 1, index = 0;
        if(str.length() == 0) {return 0;}
        while(str.charAt(index) == ' ' && index < str.length()){ index ++; }
        if(str.charAt(index) == '+' || str.charAt(index) == '-'){
            sign = str.charAt(index) == '+' ? 1 : -1;
            index ++;
        }
        while(index < str.length()){
            int digit = str.charAt(index) - '0';
            if(digit < 0 || digit > 9) break;

            //check if result will be overflow after 10 times and add digit
            if(Integer.MAX_VALUE/10 < result || Integer.MAX_VALUE/10 == result && Integer.MAX_VALUE %10 < digit)
                return sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;

            result = 10 * result + digit;
            index ++;
        }
        return result * sign;
    }
}
