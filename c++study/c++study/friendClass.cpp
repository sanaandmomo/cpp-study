#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Time {
	friend class Date; // Date Ŭ�������� Time Ŭ������ �̿��� �� �ִ�.

private:
	int hour, min, sec;
	
public:
	Time() {
		setCurrentTime();
	}

	void setCurrentTime() {
		time_t currentTime = time(NULL);
		struct tm *p = localtime(&currentTime);
		this->hour = p->tm_hour;
		this->min = p->tm_min;
		this->sec = p->tm_sec;
	}
};

class Date {
private:
	int year, month, day;

public:
	Date(int year, int month, int day) : year(year), month(month), day(day) { }

	void show(const Time *t) {
		cout << "������ ��¥: " << year << "�� " << month << "�� " << day << "��" << "\n";
		cout << "���� �ð�: " << t->hour << ":" << t->min << ":" << t->sec << "\n";
	}
};

int main(void) {
	Time *t = new Time();
	Date *d = new Date(2021, 9, 07);
	
	d->show(t);

	system("pause");
	return 0;
}