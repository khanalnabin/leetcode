/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
  public:
	bool containsDuplicate(vector<int> &nums) {
		set<int> s;
		for (int i = 0; i < nums.size(); i++) {
			if (s.find(nums[i]) != s.end()) {
				return true;
			}
			s.insert(nums[i]);
		}
		return false;
	}
};
// @lc code=end
