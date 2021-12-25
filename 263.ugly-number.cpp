/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	bool isUgly(int n) {
		for (int i = 2; i < 6 && n > 0; i++) {
			while (n % i == 0) {
				n /= i;
			}
		}

		return n == 1;
	}
};
// @lc code=end
