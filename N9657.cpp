#include<iostream>
#define MAX 1001
using namespace std;

int main(void) {
	int N;
	int arr[MAX];

	cin >> N;

	arr[1] = 1;
	arr[2] = 0;
	arr[3] = 1;
	arr[4] = 1;
	arr[5] = 1;

	for (int i = 6; i <= N; i++) {
		if (arr[i - 1] == 0 || arr[i - 3] == 0 || arr[i - 4] == 0) {
			arr[i] = 1;
		}
		else arr[i] = 0;
	}
	if (arr[N] == 1) {
		cout << "SK" << endl;
	}
	else {
		cout << "CY" << endl;
	}

	return 0;
}
