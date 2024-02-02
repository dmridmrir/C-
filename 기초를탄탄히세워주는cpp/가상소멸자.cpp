#include <iostream>
#include <string>

using namespace std;

class CString {
private:
	char* pStr;
	int len;
public:
	CString(const char* s) {
		len = strlen(s);
		pStr = new char[len + 1];
		strcpy(pStr, s);
		cout << "CString 생성자 " << endl;
	}
	virtual ~CString() {
		delete[] pStr;
		cout << "CString 소멸자" << endl;
	}
};

class CMyString :public CString {
private:
	char* pMyStr;
	int MyLen;
public:
	CMyString(const char* s1, const char* s2):CString(s1) {
		MyLen = strlen(s2);
		pMyStr = new char[MyLen + 1];
		strcpy(pMyStr, s2);
		cout << "CMyString 생성자" << endl;
	}
	~CMyString() {
		delete[] pMyStr;
		cout << "CMyString 소멸자" << endl;
	}

};

int main(void) {
	CString* pStr = new CMyString("CString", "CMyString");
	delete pStr;

	return 0;
}
