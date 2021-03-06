/*
 Author:     Deren Lei, derenlei97@gmail.com
 Date:       10/27/2017
 Problem:    Two Sum
 Difficulty: Easy
 Source:     https://leetcode.com/problems/two-sum/description/

 Question: 
 Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 You may assume that each input would have exactly one solution, and you may not use the same element twice.

 Example:
 Given nums = [2, 7, 11, 15], target = 9,

 Because nums[0] + nums[1] = 2 + 7 = 9,
 return [0, 1].
*/




class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    //Key is the number and value is its index in the vector.
    unordered_map<int, int> hash;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
      int numberToFind = target - nums[i];

      //if numberToFind is found in map, return them
      if (hash.find(numberToFind) != hash.end()) {
	result.push_back(hash[numberToFind]);
	result.push_back(i);
	return result;
      }

      //number was not found. Put it in the map.
      hash[nums[i]] = i;
    }
    return result;

  }
};
