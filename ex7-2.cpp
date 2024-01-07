//main함수가 작동할 수 있도록 +연산자를 오버로딩
//멤버 함수에 의한 오버로딩과 전역 함수에 의한 오버로딩을 둘 다 구현

#include <iostream>
#include<string>

using namespace std;

class CTime {
private:
	int Hour, Minute, Second;
public:
	CTime(int a = 0, int b = 0, int c = 0) :Hour(a), Minute(b), Second(c) {}
	CTime operator+(const CTime& t1) {
		int h = Hour + t1.Hour;
		int m = Minute + t1.Minute;
		int s = Second + t1.Second;

		if (s >= 60) {
			s -= 60;
			m += 1;
		}
		if (m >= 60) {
			m -= 60;
			h += 1;
		}
		if (h >= 24) {
			h -= 24;
		}

		return CTime(h, m, s);
	}
	void Print() {
		cout << Hour << "시 " << Minute << "분 " << Second << "초" << endl;
	}
	//friend CTime operator+(const CTime& t1, const CTime& t2);
};

/*
CTime operator+(const CTime& t1, const CTime& t2) {
	int h = t2.Hour + t1.Hour;
	int m = t2.Minute + t1.Minute;
	int s = t2.Second + t1.Second;

	if (s >= 60) {
		s -= 60;
		m += 1;
	}
	if (m >= 60) {
		m -= 60;
		h += 1;
	}
	if (h >= 24) {
		h -= 24;
	}
	return CTime(h, m, s);
}
*/


int main(void) {
	CTime time1(4, 50, 40);
	CTime time2(3, 40, 30);
	CTime time3 = time1 + time2;

	time1.Print();
	time2.Print();
	time3.Print();

	return 0;
}
