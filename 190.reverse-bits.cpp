/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	uint32_t reverseBits(uint32_t n) {
		bitset<32> bs(n);
		for (int i = 0; i < 16; i++) {
			bool tmp = bs[i];
			bs[i] = bs[32 - i - 1];
			bs[32 - i - 1] = tmp;
		}
		return uint32_t(bs.to_ullong());
	}
};
// @lc code=end
