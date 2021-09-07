#include <iostream>
#include <set>
#include <map>
#include <string>

using namespace std;

// 셋
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

	// 1 2 3 4 5 6 8 10 (자동 오름차순 정렬됨)
	for (; iter != s.end(); iter++) {
		cout << *iter << ' ';
	}
	cout << endl;
}

// 맵
void m() {
	map<string, int> m;
	m["한수빈"] = 1;
	m["홍길동"] = 2;
	m["이순신"] = 3;

	map<string, int>::iterator iter = m.begin();
	for (; iter != m.end(); iter++) {
		cout << iter->first << ":" << iter->second << endl;
	}

	m["김유신"] = 4;
	cout << m["없는 사람"] << endl; // 0
	
	// 없는 사람도 map에 접근했기 때문에 존재한다.
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