#include <iostream>

using namespace std;

int hannum(int N) {
	int count = 99;
	int res = 99;
	int arr[3];
	if (N < 100) {
		return N;
	}
	else {
		for (int i = 100; i <= N; i++) {
			arr[0] = i / 100;
			arr[1] = i / 10 % 10;
			arr[2] = i % 10;
			if ((arr[0] - arr[1]) == (arr[1] - arr[2])) {
				res++;
			}
		}
		return res;
	}
}

int main(void) {
	int N;
	cin >> N;

	cout << hannum(N) << endl;
}
