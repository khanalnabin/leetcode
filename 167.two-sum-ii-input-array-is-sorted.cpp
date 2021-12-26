/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		map<int, int> m;
		for (int i = 0; i < numbers.size(); i++) {
			int result = m[target - numbers[i]];
			if (result > 0) {
				if (result > (i + 1)) {
					return vector<int>{i + 1, result};
				} else {
					return vector<int>{result, i + 1};
				}
			}
			m[numbers[i]] = i + 1;
		}
		return vector<int>{};
	}
};
// @lc code=end
