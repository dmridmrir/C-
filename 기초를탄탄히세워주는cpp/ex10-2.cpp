//배열과 원소의 갯수를 매개로 전달받아 배열의 원소중 최댓값을 반환하는 함수를 템플릿으로 작성
//main함수가 작동되도록 작성

#include <iostream>
#include <string>

using namespace std;

template <typename t1>
t1 Max(t1 *arr, int a) {
	t1 max = 0;
	for (int i = 0; i < a; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main(void) {
	int ary1[4] = { 4,5,2,7 };
	double ary2[5] = { 1.1,4.4,8.8,4.2,5.5 };

	cout << Max(ary1, 4) << endl;
	cout << Max(ary2, 5) << endl;

	return 0;
}
