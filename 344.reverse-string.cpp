/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	void reverseString(vector<char> &s) {
		int size = s.size();
		for (int i = 0; i < size / 2; i++) {
			swap(s[i], s[size - 1 - i]);
		}
	}
};
// @lc code=end
