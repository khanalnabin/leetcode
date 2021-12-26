/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	bool isPalindrome(int x) {
		if (x < 0) {
			return false;
		} else if (x < 10) {
			return true;
		} else if (x % 10 == 0) {
			return false;
		} else {
			int digit = log10(x);
			int first = 0;
			for (int i = 0; i < digit; i++) {
				first = first * 10 + x % 10;
				x /= 10;
				if (x == first || (x / 10) == first) {
					return true;
				}
			}
		}
		return false;
	}
};
// @lc code=end
