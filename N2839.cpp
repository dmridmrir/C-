#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N;
int dp[5001];

int main(void) {
	FASTIO;
	cin >> N;

	dp[3] = dp[5] = 1;
	

	for (int i = 6; i <= N; i++) {
		if (dp[i - 3]) {
			dp[i] = dp[i - 3] + 1;
		}
		if (dp[i - 5]) {
			dp[i] = dp[i] ? min(dp[i], dp[i - 5] + 1) : dp[i - 5] + 1;
		}
	}

	
	cout << (dp[N] == 0 ? -1 : dp[N]) << endl;

	return 0;
}
