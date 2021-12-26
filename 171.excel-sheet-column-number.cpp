/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	int titleToNumber(string columnTitle) {
		int number = 0;
		for (auto &c : columnTitle) {
			number = number * 26 + int(c - 'A' + 1);
		}
		return number;
	}
};
// @lc code=end
