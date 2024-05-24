#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int T, k, n;
int dp[15][15];

int main(void) {
	FASTIO;

	cin >> T;

	for (int i = 0; i < 15; i++) {
		dp[i][0] = 0;
		dp[0][i] = i;
	}

	while (T--) {
		cin >> k;
		cin >> n;

		for (int i = 1; i < 15; i++) {
			for (int j = 1; j < 15; j++) {
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			}
		}
		cout << dp[k][n]<<"\n";
	}


	return 0;
}
