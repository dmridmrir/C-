#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N;
int arr[1001];

int main(void) {
	FASTIO;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < N; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j>=0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
