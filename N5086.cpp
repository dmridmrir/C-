#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N,M;

int main(void) {
	FASTIO;

	while (true) {
		cin >> N >> M;

		if (N == 0 && M == 0) {
			break;
		}

		if (N % M == 0) {
			cout << "multiple" << "\n";
		}
		else if (M % N == 0) {
			cout << "factor" << "\n";
		}
		else {
			cout << "neither" << "\n";
		}

	}


	return 0;
}
