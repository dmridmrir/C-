#include <iostream>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int N;
int stair[301],dp[301];

int main(){
	FASTIO;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> stair[i];
	}

	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];
	dp[3] = stair[3] + max(stair[1], stair[2]);

	for (int i = 4; i <= N; i++) {
		dp[i] = stair[i] + max(dp[i - 2], dp[i - 3] + stair[i - 1]);
	}

	cout << dp[N] << "\n";

	return 0;
}


/*
#include <iostream>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int N;
int stair[301];
int result = 0;

int main(){
	FASTIO;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> stair[i];
	}
	int duplication = 0;

	while (N > 0) {
		if (result == 0) {
			result += stair[N];
			N--;
			duplication++;
		}
		else if (stair[N] >= stair[N - 1] || N==1) {
			result += stair[N];
			N--;
			duplication++;
		}
		else {
			result += stair[N - 1];
			N -= 2;
			duplication;
		}

		if (duplication == 2) {
			result += stair[N - 1];
			N -= 2;
			duplication = 0;
		}

	}

	cout << result << "\n";

	return 0;
}

*/
