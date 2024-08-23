#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int arr[1001];
int N,K;
int del_count = 0;
int res;

int main(void) {
	FASTIO;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= 500; j++) {
			if (i * j <= N) {
				if (arr[i * j] != 0) {
					arr[i * j] = 0;
					del_count++;
					if (del_count == K) {
						res = i * j;
						break;
					}
				}
				else {
					continue;
				}
			}
		}
		if (del_count == K) {
			break;
		}
	}

	cout << res << "\n";

	return 0;
}
