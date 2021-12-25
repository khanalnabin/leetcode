/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	vector<string> summaryRanges(vector<int> &nums) {
		vector<string> arr = {};
		if (nums.empty()) {
			return arr;
		}
		int first = nums[0];
		int current = nums[0];
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] == current + 1) {
				current = nums[i];
			} else {
				if (first == current) {
					arr.push_back(to_string(first));
				} else {
					arr.push_back(to_string(first) + "->" + to_string(current));
				}
				first = nums[i];
				current = nums[i];
			}
		}

		if (first == current) {
			arr.push_back(to_string(first));
		} else {
			arr.push_back(to_string(first) + "->" + to_string(current));
		}
		return arr;
	}
};
// @lc code=end
