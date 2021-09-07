#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	int studentId;
	string name;
public:
	Student(int studentId, string name) : studentId(studentId), name(name) { }
	
	// friend Ű���带 �̿��� private ��� ������ ����
	// friend Ű���带 ����ϸ� ������ �����ε���, �� �ڽŵ� ���ڿ� ���Խ��Ѿ� �Ѵ�.
	friend Student operator + (const Student &student, const Student &other) {
		return Student(student.studentId, student.name + " & " + other.name);
	}

	void showName() {
		cout << "�̸�: " << name << "\n";
	}
};

int main(void) {
	Student student(1, "�Ѽ���");
	Student result = student + student;
	result.showName();

	system("pause");
	return 0;
}