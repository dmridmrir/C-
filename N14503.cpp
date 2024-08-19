#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N, M, r, c, d;
int room[51][51];
int clean_count = 1;

void clean() {
	if (room[r][c] == 0) {
		room[r][c] = 2;
		clean_count++;
	}
}

int main(void) {
	FASTIO;

	cin >> N >> M;
	cin >> r >> c >> d;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> room[i][j];
		}
	}

	room[r][c] = 2;

	while (r > 0 && c > 0 && r < N && c < M) {
		if (room[r+1][c] == 0 || room[r-1][c] == 0 || room[r][c+1] == 0 || room[r][c-1] == 0) {
			for (int i = 0; i < 4; i++) {
				d = (d + 3) % 4;
				if (d == 0 && room[r-1][c] == 0) {
					r--;
					break;
				}
				else if (d == 1 && room[r][c+1] == 0) {
					c++;
					break;
				}
				else if (d == 2 && room[r+1][c] == 0) {
					r++;
					break;
				}
				else if (d == 3 && room[r][c-1] == 0) {
					c--;
					break;
				}
			}
			clean();
		}
		else {
			if (d == 0 && room[r+1][c] != 1) {
				r++;
			}
			else if (d == 1 && room[r][c-1] != 1) {
				c--;
			}
			else if (d == 2 && room[r-1][c] != 1) {
				r--;
			}
			else if (d == 3 && room[r][c+1] != 1) {
				c++;
			}
			else {
				break;
			}
		}
	}

	cout << clean_count << "\n";


	return 0;
}
