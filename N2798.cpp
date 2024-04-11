#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N, M;
int deck[101];
int temp = 0, now = 0;

int main(void) {
	FASTIO;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> deck[i];
	}
	int max = M;

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				temp = deck[i] + deck[j] + deck[k];
				if ((temp <= max) && (temp > now)) {
					now = temp;
				}
			}
		}
	}

	cout << now << endl;

	return 0;
}
