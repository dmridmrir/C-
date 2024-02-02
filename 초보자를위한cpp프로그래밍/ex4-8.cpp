#include <iostream>

using namespace std;

/*
높이와 밑변을 입력하면 삼각형의 면적을 출력하는 코드 작성
*/
int main(void) {
	int h, w;
	double res;

	cout << "삼각형의 높이를 입력하세요" << endl;
	cin >> h;
	cout << "삼각형의 밑변을 입력하세요" << endl;
	cin >> w;
	res = h * w / 2.0;
	cout << "삼각형의 면적은 " << res << "입니다" << endl;

	return 0;
}
