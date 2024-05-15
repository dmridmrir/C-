#include <iostream>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int dp[1000001];
int N;

int main() {
	FASTIO;

	cin >> N;
	dp[1] = dp[2] = dp[3] = 1;

	for (int i = 4; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;

		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}

	cout << dp[N] << "\n";

	return 0;
}
