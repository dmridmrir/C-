#include <iostream>
#include<algorithm>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N;
int A[50], B[50];
int res=0;

bool compare1(int a, int b) {
	return a > b;
}

int main(void) {
	FASTIO;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	sort(A, A + N);
	sort(B, B + N, compare1);

	for (int i = 0; i < N; i++) {
		res += A[i] * B[i];
	}

	cout << res << "\n";

	return 0;
}
