/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
  public:
	bool hasCycle(ListNode *head) {
		map<ListNode *, bool> visited;
		ListNode *current = head;
		while (current != NULL) {
			if (visited[current]) {
				return true;
			} else {
				visited[current] = true;
				current = current->next;
			}
		}
		return false;
	}
};
// @lc code=end
