/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	int romanToInt(string s) {
		unordered_map<char, int> m = {
		    {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
		    {'C', 100}, {'D', 500}, {'M', 1000},
		};

		int sum = 0;
		int previous = 0;
		std::reverse(s.begin(), s.end());
		for (auto c : s) {
			int val = m[c];
			if (val < previous) {
				sum = sum - val;
			} else {
				sum = sum + val;
			}
			previous = val;
		}
		return sum;
	}
};
// @lc code=end
