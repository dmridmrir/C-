#include <iostream>
#include<string>
using namespace std;

#define MAX 2000000
int arr[MAX];


void findPrime() {
	for (int i = 2; i < MAX; i++) {
		if (arr[i] == 0) {
			for (int j = 2 * i; j < MAX; j += i) {
				arr[j] = 1;
			}
		}
	}

}

int findPal(int n) {
	string s = to_string(n);
	for (int i = 0; i < s.length()/2; i++) {
		if (s[i] != s[s.length() - i - 1]) {
			return 0;
		}
	}
	return 1;
}

int main(void) {

	arr[0] = arr[1] = 1;
	findPrime();

	int N;
	cin >> N;

	while (true) {
		if (!arr[N] && findPal(N)) {
			cout << N;
			break;
		}
		N++;
	}

	return 0;
}
