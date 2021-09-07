#include <iostream>
#include <string>

using namespace std;

template <typename T> 
void change(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

// 명시적 특수화
template <>
void change<int>(int& a, int& b) {
	cout << "정수형 데이터를 교체" << "\n";
	int tmp = a;
	a = b;
	b = tmp;
}

// 클래스 템플릿 (T = int 디폴트 템플릿 지정)
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
	string a = "한수빈";
	string b = "홍길동";
	
	change(a, b);
	cout << a << ":" << b << endl;

	int c = 7;
	int d = 5;

	change(c, d);
	cout << c << ":" << d << endl;

	Data<> data1(1);
	Data<string> data2("한수빈");

	cout << data1.getData() << ":" << data2.getData() << endl;

	system("pause");
	return 0;
}