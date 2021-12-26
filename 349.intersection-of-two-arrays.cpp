/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
		set<int> s1(nums1.begin(), nums1.end());
		set<int> s2(nums2.begin(), nums2.end());
		std::vector<int> result = {};
		set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
		                 result.begin());
		return result;
	}
};
// @lc code=end
