#include <iostream>

#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);

using namespace std;


int main() {
	FASTIO;
	int H, W, N, M;
	cin >> H >> W >> N >> M;
	int t1 = (H - 1) / (N + 1) + 1;
	int t2 = (W - 1) / (M + 1) + 1;
	cout << t1 * t2;

	return 0;
}
