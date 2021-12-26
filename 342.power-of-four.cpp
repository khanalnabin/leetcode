/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	bool isPowerOfFour(int n) {
		if (n <= 0) {
			return false;
		}
		float result = log(n) / log(4);
		return (result - int(result)) == 0;
	}
};
// @lc code=end
