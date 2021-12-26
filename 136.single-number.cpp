/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	int singleNumber(vector<int> &nums) {
		int number = 0;
		for (auto v : nums) {
			number = number ^ v;
		}
		return number;
	}
};
// @lc code=end
