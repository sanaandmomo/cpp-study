#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

// ��
void s() {
	int arr[5] = { 2, 4, 6, 8, 10 };
	set<int> s(arr, arr + 5);
	set<int>::iterator iter = s.begin();

	// 2 4 6 8 10
	for (; iter != s.end(); iter++) {
		cout << *iter << ' ';
	}
	cout << endl;

	s.insert(1);
	s.insert(3);
	s.insert(5);
	
	iter = s.begin();

	// 1 2 3 4 5 6 8 10 (�ڵ� �������� ���ĵ�)
	for (; iter != s.end(); iter++) {
		cout << *iter << ' ';
	}
	cout << endl;
}

// ��
void m() {
	map<string, int> m;
	m["�Ѽ���"] = 1;
	m["ȫ�浿"] = 2;
	m["�̼���"] = 3;

	map<string, int>::iterator iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}

	m["������"] = 4;
	cout << m["���� ���"] << endl; // 0
	
	// ���� ����� map�� �����߱� ������ �����Ѵ�.
	iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}
}

int main(void) {
	m();

	system("pause");
	return 0;
}