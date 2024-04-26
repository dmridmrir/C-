#include <iostream>
#include<map>
#include<set>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N,num;
int arr[500001];


int mean(int* ary, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ary[i];
	}

	return sum / n;
}

int middle(int* ary, int n) {
	int m = n / 2;

	return ary[m];
}

int mode(int* ary, int n) {
	map<int, int> m;

	for (int i = 0; i < n; i++) {
		m[ary[i]]++;
	}

	set<int> modes;

	int maxCount = 0;


	for (const auto& pair : m) {
		if (pair.second > maxCount) {
			maxCount = pair.second;
			modes.clear();
			modes.insert(pair.first);
		}
		else if (pair.second == maxCount) {
			modes.insert(pair.first);
		}
	}

	if (modes.size() > 1) {
		auto it = modes.begin();
		advance(it, 1);
		return *it;
	}
	else {
		return *modes.begin();
	}
}
int ran(int* ary, int n) {
	return ary[n-1]-ary[0];
}


int main(void) {
	FASTIO;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < N; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;
	}

	cout << mean(arr, N) << endl;
	cout << middle(arr, N) << endl;
	cout << mode(arr, N) << endl;
	cout << ran(arr, N) << endl;

	return 0;
}
