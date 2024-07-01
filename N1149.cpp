#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N;
int R[1001], G[1001], B[1001];
int dp[1001][3];

int main(void) {
	FASTIO;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> R[i] >> G[i] >> B[i];
	}

	for (int i = 1; i <= N; i++) {
		dp[i][0] += min(dp[i - 1][1], dp[i - 1][2]) + R[i];
		dp[i][1] += min(dp[i - 1][0], dp[i - 1][2]) + G[i];
		dp[i][2] += min(dp[i - 1][0], dp[i - 1][1]) + B[i];
	}

	int ans = 0;
	ans = min({ dp[N][0],dp[N][1],dp[N][2] });

	cout << ans;

	return 0;
}
