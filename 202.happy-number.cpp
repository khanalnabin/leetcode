/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	int sumOfSquares(int n) {
		int ans = 0;
		while (n != 0) {
			ans += pow(n % 10, 2);
			n /= 10;
		}
		return ans;
	}
	bool isHappy(int n) {
		unordered_map<int, bool> m;
		while (true) {
			if (n == 1) {
				return true;
			} else if (m[n]) {
				return false;
			} else {
				m[n] = true;
				n = sumOfSquares(n);
			}
		}
	}
};
// @lc code=end
