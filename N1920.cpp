#include <iostream>
#include<algorithm>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N, M,n;
int arr[100000];

int binary_search(int a) {
	int start = 0, end = N - 1;

	while (start <= end) {
		int mid = (start + end) / 2;
		if (a == arr[mid]) {
			return 1;
		}
		else if (a < arr[mid]) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return 0;
}

int main(void) {
	FASTIO;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr+N);

	cin >> M;
	while (M--) {
		cin >> n;
		cout<<binary_search(n)<<"\n";
	}


	return 0;
}
