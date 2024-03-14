#include <iostream>
#include <vector>

using namespace std;
#define MAX 11
int dp[MAX]={ 1,2,4 };

int main(void) {

	int T, N;
	cin >> T;


	for (int i = 3; i < MAX; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	while (T > 0) {
		cin >> N;

		cout << dp[N - 1] << endl;

		T--;
	}

	return 0;
}
