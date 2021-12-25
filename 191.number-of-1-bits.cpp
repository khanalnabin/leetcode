/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	int hammingWeight(uint32_t n) {
		bitset<32> bs(n);
		return bs.count();
	}
};
// @lc code=end
