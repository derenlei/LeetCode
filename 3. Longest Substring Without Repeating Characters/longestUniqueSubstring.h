/*
 Author:     Deren Lei, derenlei97@gmail.com
 Date:       10/29/2017
 Problem:    Longest Substring Without Repeating Characters
 Difficulty: Medium
 Source:     https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

 Question:
 Given a string, find the length of the longest substring without repeating characters.

 Examples:

 Given "abcabcbb", the answer is "abc", which the length is 3.
 Given "bbbbb", the answer is "b", with the length of 1.
 Given "pwwkew", the answer is "wke", with the length of 3.
 Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> charMap;
        int start = -1, maxLen = 0;
        for(int i = 0; i < s.length(); i++){
            if(charMap.count(s[i]) != 0){
                // Everytime encounter a repeated character within the current substring, start to calculate length from there
                // To determine whether repeated character is within the current substring, compare their index
                start = max(start, charMap[s[i]]);

            }
            // Each character will only be stored once. Refresh index everytime encountered a repeated character.
            // Refresh in order to store the latest repeated character. It is used to determine whether repeated character is wthin the                   // curtrent substring
            charMap[s[i]] = i;
            // The characters of max length substring will not be stored. Only store its max length
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};
