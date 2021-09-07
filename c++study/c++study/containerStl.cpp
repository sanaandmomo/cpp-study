#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// 스택
void st() {
	stack<int> s;
	s.push(7);
	s.push(5);
	s.push(4);
	s.pop();
	s.push(19);

	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
}

// 큐
void q() {
	queue<int> q;
	q.push(7);
	q.push(5);
	q.push(4);
	q.pop();
	q.push(19);

	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}

// 우선순위큐
void pq() {
	priority_queue<int> pq;
	int n, x;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		pq.push(x);
	}

	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}
}

int main(void) {
	pq();

	system("pause");
	return 0;
}