/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class MyStack {
  private:
	queue<int> q;

  public:
	MyStack() { q = queue<int>{}; }

	void push(int x) {
		q.push(x);
		for (int i = 1; i < q.size(); i++) {
			q.push(q.front());
			q.pop();
		}
	}

	int pop() {
		int top = q.front();
		q.pop();
		return top;
	}

	int top() { return q.front(); }

	bool empty() { return q.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
