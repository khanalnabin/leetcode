/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
  public:
	bool containsNearbyDuplicate(vector<int> &nums, int k) {
		unordered_map<int, int> m;
		for (int i = 0; i < nums.size(); i++) {
			try {
				if (m.at(nums[i]) >= 0) {
					if (abs(m[nums[i]] - i) <= k) {
						return true;
					} else {
						m[nums[i]] = max(m[nums[i]], i);
					}
				}
			} catch (out_of_range) {
				m[nums[i]] = i;
			}
		}
		return false;
	}
};
// @lc code=end
