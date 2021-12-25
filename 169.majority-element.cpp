/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	int majorityElement(vector<int> &nums) {
		nth_element(nums.begin(), nums.begin() + nums.size() / 2, nums.end());
		return nums[nums.size() / 2];
	}
};
// @lc code=end
