#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N, T, P, c=0;
int l[51];

int main(void) {
	FASTIO;

	cin >> N >> T >> P;



	for (int i = 0; i < N; i++) {
		cin >> l[i];
	}

	for (int i = 0; i < N; i++) {
		if (T < l[i]) {
			c++;
		}
	}

	if (N == 0) {
		cout << 1 << endl;
	}else if (c + 1 == P && l[P-1] >= T) {
		cout << "-1" << endl;
	}
	else {
		cout << c + 1 << endl;
	}

	return 0;
}
