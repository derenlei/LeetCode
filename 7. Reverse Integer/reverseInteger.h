/*
 Author:     Deren Lei, derenlei97@gmail.com
 Date:       10/27/2017
 Problem:    Reverse Integer
 Difficulty: Easy
 Source:     https://leetcode.com/problems/reverse-integer/description/

 Question:
 Reversee digits of an integer.

 Example1: x = 123, return 321
 Example2: x = -123, return -321

 Note:
 The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.
*/


class Solution {
 public:
  int reverse(int x) {
    long long reverse = 0;
    while(x != 0) {
      reverse = reverse*10 + x%10;
      x /= 10;
    }
    if (reverse<INT_MIN || reverse>INT_MAX) { return 0; }
    else { return reverse; }
  }
};
