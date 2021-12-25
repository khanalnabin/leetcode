/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	bool isAnagram(string s, string t) {
		if (t.size() != s.size()) {
			return false;
		}
		int sarr[26] = {0};
		int tarr[26] = {0};
		for (int i = 0; i < s.size(); i++) {
			sarr[s[i] - 'a']++;
			tarr[t[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (sarr[i] != tarr[i]) {
				return false;
			}
		}
		return true;
	}
};
// @lc code=end
