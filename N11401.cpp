#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

long long N, K,A,B;
long long mod = 1000000007;

long long solve(int x) {
	if (x == 0) {
		return 1;
	}
	if (x % 2 == 1) {
		return B * solve(x - 1) % mod;
	}
	else {
		long long half = solve(x / 2);
		return half * half % mod;
	}
}

int main(void) {
	FASTIO;

	cin >> N >> K;
	A = 1;
	for (int i = N; i >= N - K + 1; i--) A = (A * i) % mod;

	B = 1;
	for (int i = 1; i <= K; i++) B = (B * i) % mod;

	B = solve(mod - 2);

	cout << A * B % mod;

	return 0;
}
