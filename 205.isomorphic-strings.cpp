/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	void replaceAll(string::iterator start, string::iterator end, char s,
	                char t) {
		for (; start != end; ++start) {
			if (*start == s) {
				*start = t;
			}
		}
	}
	bool isIsomorphic(string s, string t) {
		int m_s[256] = {0};
		int m_t[256] = {0};
		for (int i = 0; i < s.length(); i++) {
			if (m_s[s[i]] != m_t[t[i]]) {
				return false;
			}
			m_s[s[i]] = i + 1;
			m_t[t[i]] = i + 1;
		}
		return true;
	}
};
// @lc code=end
