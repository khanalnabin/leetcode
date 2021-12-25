/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	int missingNumber(vector<int> &nums) {
		int sum = accumulate(nums.begin(), nums.end(), 0);
		int size = nums.size();
		return size * (size + 1) / 2 - sum;
	}
};
// @lc code=end
