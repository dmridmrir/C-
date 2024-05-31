#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N, K;

int main(void) {
	FASTIO;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			K--;
		}
		if (K == 0) {
			cout << i << "\n";
			break;
		}
	}

	if (K > 0) {
		cout << 0 << "\n";
	}


	return 0;
}
