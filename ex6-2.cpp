//아래 코드의 출력 결과를 예상하고 문제가 발생한다면 왜 문제가 발생하는지 설명하라
//showString(str1,3)에 의해 복사 생성이 반복적으로 일어나게 되는데 반복되는 중에는 소멸이 일어나지 않는다
//따라서 	cout << "count : " << count << endl;  str.Print(); 부분은 정상적으로 출력이 될 것이다
//출력이 완료되고 마지막으로 생성된 str객체부터 메모리를 해제하는데 생성된 객체 모두 같은 메모리 주소를 갖기 때문에
//첫 메모리 해제가 일어난 후 다음 메모리를 해제하는 과정에서 오류가 발생하게 된다

#include <iostream>
#include<string>

using namespace std;

class CString {
private:
	int len;
	char* str;
public:
	CString(const char* s = "unknown") {
		len = strlen(s);
		str = new char[len + 1];
		strcpy(str, s);
	}
	~CString() {
		delete[] str;
	}
	void Print() {
		cout << str << endl;
	}
};

void showString(CString str, int count) {
	if (count <= 0) {
		return;
	}
	cout << "count : " << count << endl;
	str.Print();
	showString(str, count - 1);
}

int main(void) {
	CString str1 = "C++ Programming";
	showString(str1,3);

	return 0;
}
