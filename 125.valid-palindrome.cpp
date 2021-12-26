/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	bool isPalindrome(string s) {
		string newString = "";
		for (auto &c : s) {
			if (::isalnum(c)) {
				newString += ::tolower(c);
			}
		}
		int length = newString.length();
		if (length % 2 == 0) {
			int mid = length / 2;
			string first, last;
			first = newString.substr(0, mid);
			last = newString.substr(mid, mid);
			reverse(last.begin(), last.end());
			if (first == last) {
				return true;
			} else {
				return false;
			}
		} else {
			int mid = length / 2;
			string first, last;
			first = newString.substr(0, mid);
			last = newString.substr(mid + 1, mid);
			reverse(last.begin(), last.end());
			if (first == last) {
				return true;
			} else {
				return false;
			}
		}
	}
};
// @lc code=end
