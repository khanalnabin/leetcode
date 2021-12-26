/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
  public:
	bool isVowel(char c) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			return true;
		return false;
	}
	string reverseVowels(string s) {
		int start = 0, end = s.size() - 1;
		while (start < end) {
			start = s.find_first_of("aeiouAEIOU", start);
			end = s.find_last_of("aeiouAEIOU", end);
			if (start < end) {
				swap(s[start++], s[end--]);
			}
		}
		return s;
	}
};
// @lc code=end
