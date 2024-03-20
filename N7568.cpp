#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

#define MAX 200

int N;
int weight[MAX], height[MAX], result[MAX];


int main(void) {
	FASTIO;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> weight[i] >> height[i];
	}

	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = 0;j < N; j++) {
			if (weight[i] < weight[j] && height[i] < height[j]) {
				count++;
			}
		}
		result[i] = count + 1;
	}

	for (int i = 0; i < N; i++) {
		cout << result[i] << " ";
	}

	return 0;
}
