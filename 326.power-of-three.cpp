/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	bool isPowerOfThree(int n) {
		if (n <= 0) {
			return false;
		} else if (n % 2 == 0) {
			return false;
		} else {
			float result = (log(n) / log(3));
			return (result - int(result)) == 0;
		}
	}
};
// @lc code=end
