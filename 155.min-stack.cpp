/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
struct Node {
	int element;
	Node *next;
};
class MinStack {
  private:
	stack<int> el;
	stack<int> m;

  public:
	MinStack() {}

	void push(int val) {
		if (m.empty() || val <= getMin()) {
			m.push(val);
		}
		el.push(val);
	}

	void pop() {
		if (getMin() == el.top())
			m.pop();
		el.pop();
	}

	int top() { return el.top(); }

	int getMin() { return m.top(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
