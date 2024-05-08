#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N,res = 0;
int triangle[501][501];

int main(void) {
	FASTIO;

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> triangle[i][j];
		}
	}

	for (int i = N - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			triangle[i - 1][j] += max(triangle[i][j], triangle[i][j + 1]);
		}
	}

	cout << triangle[0][0];

	return 0;
}
