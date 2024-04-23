#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int A, B, C, D, E, F, X, Y;

int main(void) {
	FASTIO;

	cin >> A >> B >> C >> D >> E >> F;

	for (X = -999; X <= 999; X++) {
		for (Y = -999; Y <= 999; Y++) {
			if (A*X + B*Y == C && D*X+E*Y == F) {
				cout << X <<" "<< Y << endl;
				return 0;
			}
		}
	}


	return 0;
}
