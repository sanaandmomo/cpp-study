#include <iostream>
#include <string>

using namespace std;

template <typename T> 
void change(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

// ����� Ư��ȭ
template <>
void change<int>(int& a, int& b) {
	cout << "������ �����͸� ��ü" << "\n";
	int tmp = a;
	a = b;
	b = tmp;
}

// Ŭ���� ���ø� (T = int ����Ʈ ���ø� ����)
template <typename T = int>
class Data {
private:
	T data;

public:
	Data(T data) : data(data) { }

	void setData(T data) {
		this->data = data;
	}

	T getData() {
		return data;
	}
};


int main(void) {
	string a = "�Ѽ���";
	string b = "ȫ�浿";
	
	change(a, b);
	cout << a << ":" << b << endl;

	int c = 7;
	int d = 5;

	change(c, d);
	cout << c << ":" << d << endl;

	Data<> data1(1);
	Data<string> data2("�Ѽ���");

	cout << data1.getData() << ":" << data2.getData() << endl;

	system("pause");
	return 0;
}