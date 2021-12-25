/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
  public:
	bool isPowerOfTwo(int n) {
		if (n <= 0) {
			return false;
		}
		return (n & (n - 1)) == 0;
	}
};
// @lc code=end
