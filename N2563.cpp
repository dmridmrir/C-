#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

bool check[100][100];
int N;


int main(void) {
	FASTIO;

	cin >> N;
	int left, down,count = 0;
	while (N--) {
		cin >> left >> down;
		for (int i = left; i < left + 10; i++) {
			for (int j = down; j < down + 10; j++) {
				if (check[i][j] == false) {
					count++;
					check[i][j] = true;
				}
			}
		}
	}
	
	cout << count << endl;

	return 0;
}
