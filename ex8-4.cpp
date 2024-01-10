//날짜 저장을 위한 CDate, 시간을 저장하기 위한 CTime, 날짜 시간 할일 저장하는 CDateTime작성

#include <iostream>
#include <string>

using namespace std;

class CDate {
protected:
	int year, month, day;
public:
	CDate(int a, int b, int c) :year(a), month(b), day(c) {}
	void Print() {
		cout << year << "년" << month << "월" << day << "일" << endl;
	}
};
class CTime {
protected:
	int hour, minute, second;
public:
	CTime(int d, int e, int f) :hour(d), minute(e), second(f) {}
	void Print() {
		cout << hour << "시" << minute << "분" << second << "초" << endl;
	}
};
class CDateTime :public CDate, public CTime {
private:
	int len;
	char* todo;
public:
	CDateTime(int a, int b, int c, int d, int e, int f, const char* s) :CDate(a, b, c), CTime(d, e, f) {
		len = strlen(s);
		todo = new char[len + 1];
		strcpy(todo, s);
	}
	void Print() {
		CTime::Print();
		CDate::Print();
		cout << "할일 : " << todo << endl;
	}
};

int main(void) {
	CDateTime now(2024, 1, 10, 5, 40, 10, "집에 가기");
	now.Print();

	return 0;
}
