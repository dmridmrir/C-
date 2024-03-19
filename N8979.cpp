#include <iostream>
#include<vector>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

#define MAX 1001
int N, K;
int gold[MAX];
int silver[MAX];
int bronze[MAX];
int r = 0;



int main(void) {
	FASTIO;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		int no;
		cin >>no>> gold[no] >> silver[no] >> bronze[no];
	}

	for (int i = 1; i <= N; i++) {
		if (gold[i] > gold[K]) {
			r++;
		}
		else if (gold[i] == gold[K]) {
			if (silver[i] > silver[K]) {
				r++;
			}
			else if (silver[i] == silver[K]) {
				if (bronze[i] > bronze[K]) {
					r++;
				}
			}
		}
	}

	cout << r + 1 << endl;

	return 0;
}
