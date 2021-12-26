/*
 * @lc app=leetcode id=258 lang=cpp
 *
 * [258] Add Digits
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	int addDigits(int num) {
		// while (num > 9) {
		// 	int sum = 0;
		// 	while (num > 0) {
		// 		sum += num % 10;
		// 		num /= 10;
		// 	}
		// 	num = sum;
		// }
		// return num;
		if (num % 9 == 0 && num != 0) {
			return 9;
		}
		return num % 9;
	}
};
// @lc code=end
