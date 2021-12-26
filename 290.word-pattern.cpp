/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	bool wordPattern(string pattern, string s) {
		vector<string> vec;
		string temp = "";
		for (auto &c : s) {
			if (c == ' ') {
				if (temp != "") {
					vec.push_back(temp);
					temp = "";
				}
			} else {
				temp += c;
			}
		}
		if (temp != "") {
			vec.push_back(temp);
		}
		if (pattern.length() != vec.size()) {
			return false;
		}
		unordered_map<char, string> m;
		unordered_map<string, bool> sb;
		for (int i = 0; i < vec.size(); i++) {
			if (m[pattern[i]] == "") {
				if (sb[vec[i]] == false) {
					m[pattern[i]] = vec[i];
					sb[vec[i]] = true;
				} else {
					return false;
				}
			} else {
				if (vec[i] != m[pattern[i]]) {
					return false;
				}
			}
		}
		return true;
	}
};
// @lc code=end
