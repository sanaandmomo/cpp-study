#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;

public:
	// 정적 변수
	static int count;

	Person(string name) : name(name) {
		count++;
	}
};

// 정적 변수는 클래스 밖에서 초기화 가능
int Person::count = 0;

int main(void) {
	Person p1("한수빈");
	Person p2("홍길동");
	Person p3("이순신");
	
	cout << "사람의 수: " << Person::count << endl;
	system("pause");
	return 0;
}