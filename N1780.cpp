#include <iostream>
#include<vector>>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

vector<vector<int>> v;
int N;
int res_minus = 0, res_plus = 0, res_zero = 0;

void solve(int x, int y, int n) {
	int temp_zero = 0;
	int temp_plus = 0;

	for (int i = x; i < x+n; i++) {
		for (int j = y; j < y+n; j++) {
			if (v[i][j] == 0) {
				temp_zero++;
			}
			else if (v[i][j] == 1) {
				temp_plus++;
			}
		}
	}

	if (temp_zero == 0 && temp_plus == 0) {
		res_minus++;
	}else if (temp_zero == n * n) {
		res_zero++;
	}else if (temp_plus == n * n) {
		res_plus++;
	}
	else {
		solve(x, y, n / 3);
		solve(x + n / 3, y, n / 3);
		solve(x, y + n / 3, n / 3);
		solve(x + n / 3, y + n / 3, n / 3);
		solve(x + n * 2 / 3, y, n / 3);
		solve(x, y + n * 2 / 3, n / 3);
		solve(x + n * 2 / 3, y + n / 3, n / 3);
		solve(x + n / 3, y + n * 2 / 3, n / 3);
		solve(x + n * 2 / 3, y + n * 2 / 3, n / 3);
	}

} 

int main(void) {
	FASTIO;
	cin >> N;

	v.resize(N, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> v[i][j];
		}
	}

	solve(0, 0, N);

	cout << res_minus << endl;
	cout << res_zero << endl;
	cout << res_plus << endl;

	return 0;
}
