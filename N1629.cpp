#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

typedef long long ll;

ll a, b, c, x;

ll power(ll b) {
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a % c;
	}
	x = power(b / 2) % c;
	if (b % 2 == 0) {
		return x * x % c;
	}
	else {
		return x * x % c * a % c;
	}
}

int main(void) {
	FASTIO;

	cin >> a >> b >> c;

	cout << power(b);

	return 0;
}




