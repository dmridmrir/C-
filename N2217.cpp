#include <iostream>
#include<algorithm>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N;
int lope[100000];

bool compare(int a, int b) {
	return a > b;
}

int main(void) {
	FASTIO;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> lope[i];
	}

	sort(lope, lope + N, compare);
	
	int maximum = lope[0];
	int temp;

	for (int i = 0; i < N; i++) {
		temp = lope[i] * (i + 1);
		maximum = max(maximum, temp);
	}

	cout << maximum << "\n";

	return 0;
}
