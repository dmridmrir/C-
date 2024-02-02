#include <iostream>

using namespace std;

/*
if else 문을 이용하여 국어 수학 점수를 입력맏아 평균을 계산하고
평균이 60점 이상이고 두과목 모두 40점이상이면 합격 60미만이면 불합격 출력
*/
int main(void) {
	int kor, math;

	cout << "2과목의 점수 입력 => ";
	cin >> kor >> math;

	int mean = (kor + math) / 2;

	if (mean >= 60 && kor >= 40 && math >= 40) {
		cout << "합격" << endl;
	}
	else {
		cout << "불합격" << endl;
	}

	return 0;
}
