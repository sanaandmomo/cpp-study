#include <iostream>
#include <deque>
#include <vector>

using namespace std;

// µ¦
void dq() {
	deque<int> d;

	d.push_front(3);
	d.push_back(7);
	d.pop_front();
	d.push_front(4);

	// 4 7
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
	}
	cout << endl;

	deque<int>::iterator iter = d.begin();
	
	// 4 5 5 5 7
	d.insert(iter + 1, 3, 5);
	
	iter = d.begin();

	// 4 9 5 5 5 7
	d.insert(iter + 1, 1, 9);

	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ' ';
	}
	cout << endl;

	d.clear();

	cout << d.empty() << endl;
}

// ¹éÅÍ
void v() {
	vector<int> v;

	// 3 5 8
	v.push_back(3);
	v.push_back(5);
	v.push_back(8);

	vector<int>::iterator iter = v.begin();

	// 3 7 7 7 5 8
	v.insert(iter + 1, 3, 7);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << endl;
	
	v.clear();

	cout << v.empty() << endl;
}

int main(void) {
	v();

	system("pause");
	return 0;
}