/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  public:
	ListNode *removeElements(ListNode *head, int val) {
		if (head == NULL) {
			return head;
		} else {
			while (head != NULL && head->val == val) {
				ListNode *temp = head;
				head = head->next;
				delete temp;
			}
			ListNode *current = head;
			ListNode *preptr = head;
			while (current != NULL) {
				if (current->val == val) {
					ListNode *temp = current;
					preptr->next = current->next;
					current = current->next;
					delete temp;
				} else {
					preptr = current;
					current = current->next;
				}
			}
			return head;
		}
	}
};
// @lc code=end
