#include <iostream>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

long long int A, B;
long long int GCD;

int main() {
	FASTIO;

	cin >> A >> B;
	for (int i = 1; i <= max(A, B); i++) {
		if (A % i == 0 && B % i == 0) {
			GCD = i;
		}

	}
	cout << A * B / GCD << "\n";

	return 0;
}
