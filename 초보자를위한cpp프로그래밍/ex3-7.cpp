#include <iostream>

using namespace std;

/*
f가 25.48, g가 45.85일 때, 사칙연산하는 코드 작성하고
cout과 printf의 차이점 기술
*/
int main(void) {
	double f = 25.48, g = 45.85;

	cout << f + g << endl;
	cout << f - g << endl;
	cout << f * g << endl;
	cout << f / g << endl;

	//cout은 컴파일러가 출력하려는 내용을 검사하여 속도가 느리지만 오류가 적다
	//printf는 cout과 반대

	return 0;
}
