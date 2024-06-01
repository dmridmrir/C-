#include <iostream>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int N, A, B;
int GCD;

int main() {
	FASTIO;
	cin >> N;

	while (N--) {
		cin >> A >> B;
		for (int i = 1; i <= max(A, B); i++) {
			if (A % i == 0 && B % i == 0) {
				GCD = i;
			}
		}

		cout << A * B / GCD << "\n";
	}
	

	return 0;
}
