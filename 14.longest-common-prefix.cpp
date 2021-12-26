/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	string longestCommonPrefix(vector<string> &strs) {
		string final = "";
		for (int i = 0;; i++) {
			for (auto str : strs) {
				if (str.length() == i || str[i] != strs[0][i]) {
					return final;
				}
			}
			final += strs[0][i];
		}
	}
};
// @lc code=end
