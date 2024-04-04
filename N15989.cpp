#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

#define MAX 10001

int T, n;
int dp[MAX][4];


int main(void) {
	FASTIO;

	cin >> T;

	for (int i = 1; i <= 3; i++) {
		for (int j = i; j <= 3; j++) {
			dp[j][i] = 1;
		}
	}

	for (int i = 4; i < MAX; i++) {
		dp[i][1] = dp[i - 1][1];
		dp[i][2] = dp[i - 2][1] + dp[i - 2][2];
		dp[i][3] = dp[i - 3][1] + dp[i - 3][2] + dp[i - 3][3];
	}

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << dp[n][1] + dp[n][2] + dp[n][3] << endl;
	}

	return 0;
}
