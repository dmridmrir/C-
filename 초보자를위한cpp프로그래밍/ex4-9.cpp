#include <iostream>

using namespace std;

/*
5과목 시험점수 입력후 총점과 평균 출력
*/
int main(void) {
	int score[5];
	int sum = 0;
	double mean;

	for (int i = 0; i < 5; i++) {
		cout << "과목 " << i + 1 << "의 점수를 입력하세요" << endl;;
		cin >> score[i];
	}

	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}
	mean = sum / 5.0;
	
	cout << "5과목의 합계는 " << sum << "점입니다" << endl;
	cout << "5과목의 평균은 " << mean << "점입니다" << endl;

	return 0;
}
