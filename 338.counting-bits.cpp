/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	vector<int> countBits(int n) {
		vector<int> result;
		for (int i = 0; i <= n; i++) {
			bitset<32> b(i);
			result.push_back(b.count());
		}
		return result;
	}
};
// @lc code=end
