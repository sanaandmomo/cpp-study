#include <iostream>

using namespace std;

// unique_ptr ��� ����
void uniquePtr() {
	int *arr = new int[10];
	unique_ptr<int> p1(arr);

	for (int i = 0; i < 10; i++) {
		*(arr + i) = i;
		cout << arr[i] << ' ';
	}

	p1.reset();
	cout << endl;

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}
}

// shared_ptr ��� ����
void sharedPtr() {
	int *arr = new int[10];
	arr[7] = 100;
	
	shared_ptr<int> p1(arr);
	cout << p1.use_count() << endl; // 1

	shared_ptr<int> p2(p1);
	cout << p1.use_count() << endl; // 2

	shared_ptr<int> p3 = p2;
	cout << p1.use_count() << endl; // 3

	p1.reset();
	p2.reset();
	cout << "arr[7]: " << arr[7] << endl; // 100

	p3.reset();
	cout << p1.use_count() << endl; // 0
	cout << "arr[7]: " << arr[7] << endl; // �����Ⱚ
}

// weak_ptr ��� ����
void weakPtr() {
	int *arr = new int(1);
	shared_ptr<int> sp1(arr);
	weak_ptr<int> wp = sp1; // wp�� ���� Ƚ�� ��꿡�� ����

	cout << sp1.use_count() << endl; // 1
	cout << wp.use_count() << endl; // 1

	if (1) {
		shared_ptr<int> sp2 = wp.lock(); // shared_ptr ������ ��ȯ
		cout << sp1.use_count() << endl; // 2
		cout << wp.use_count() << endl; // 2
	}

	// �������� ����Ƿ� sp2�� �����ȴ�.
	cout << sp1.use_count() << endl; // 1
	cout << wp.use_count() << endl; // 1
}

int main(void) {
	uniquePtr();
	cout << endl << endl;

	sharedPtr();
	cout << endl << endl;

	weakPtr();
	cout << endl;

	system("pause");
	return 0;
}