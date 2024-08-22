#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int E, S, M;
int year = 1;


void cal_year(int a, int b, int c) {
	int e = 1;
	int s = 1;
	int m = 1;
	while (!(a == e && b == s && c == m)) {
		e++;
		s++;
		m++;
		year++;
		if (e > 15) {
			e -= 15;
		}
		if (s > 28) {
			s -= 28;
		}
		if (m > 19) {
			m -= 19;
		}
	}
}

int main(void) {
	FASTIO;

	cin >> E >> S >> M;

	cal_year(E, S, M);

	cout << year << "\n";

	return 0;
}
