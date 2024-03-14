#include <iostream>
#include <vector>

using namespace std;

int dp[1001];
vector<int> price(1001);

int main(void) {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> price[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i - j] + price[j]);
		}
	}


	cout << dp[n];

	return 0;
}
