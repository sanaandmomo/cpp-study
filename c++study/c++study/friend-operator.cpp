#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int studentId;
	string name;
public:
	Student(int studentId, string name) : studentId(studentId), name(name) { }
	
	// friend 키워드를 이용해 private 멤버 변수에 접근
	// friend 키워드를 사용하면 연산자 오버로딩시, 나 자신도 인자에 포함시켜야 한다.
	friend Student operator + (const Student &student, const Student &other) {
		return Student(student.studentId, student.name + " & " + other.name);
	}

	void showName() {
		cout << "이름: " << name << "\n";
	}
};

int main(void) {
	Student student(1, "한수빈");
	Student result = student + student;
	result.showName();

	system("pause");
	return 0;
}