#include <iostream>
#include <vector>
#include<queue>

using namespace std;

#define MAX 11

char map[MAX][MAX];
int N, M;
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };
bool visited[MAX][MAX][MAX][MAX];

struct ball {
	int Rx, Ry;
	int Bx, By;
	int count;
};

void Move(int &rx, int &ry, int &distance, int &i) {
	while (map[rx + dx[i]][ry + dy[i]] != '#' && map[rx][ry] != 'O') {
		rx += dx[i];
		ry += dy[i];
		distance += 1;
	}
}

void BFS(int Rx, int Ry, int Bx, int By) {
	queue<ball> q;
	q.push({ Rx,Ry,Bx,By,0 });
	visited[Rx][Ry][Bx][By] = true;

	while (!q.empty()) {
		int rx = q.front().Rx;
		int ry = q.front().Ry;
		int bx = q.front().Bx;
		int by = q.front().By;
		int count = q.front().count;
		q.pop();

		if (count >= 10) {
			break;
		}

//상하좌우 이동 검사
		for (int i = 0; i < 4; i++) {
			int nrx = rx, nry = ry, nbx = bx, nby = by;
			int rc = 0, bc = 0, ncount = count + 1;

			Move(nrx, nry, rc, i);
			Move(nbx, nby, bc, i);

			if (map[nbx][nby] == 'O') {
				continue;
			}
			if (map[nrx][nry] == 'O') {
				cout << ncount;
				return;
			}

			if (nrx == nbx && nry == nby) {
				if (rc > bc) {
					nrx -= dx[i];
					nry -= dy[i];
				}
				else {
					nbx -= dx[i];
					nby -= dy[i];
				}
			}

			if (visited[nrx][nry][nbx][nby] == true) {
				continue;
			}
			visited[nrx][nry][nbx][nby] = true;
			q.push({ nrx,nry,nbx,nby,ncount });
		}
	}
	cout << -1;
}

int main(void) {
	cin >> N >> M;
	int Rx = 0, Ry = 0, Bx = 0, By = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'R') {
				Rx = i;
				Ry = j;
			}
			if (map[i][j] == 'B') {
				Bx = i;
				By = j;
			}
		}
	}

	BFS(Rx, Ry, Bx, By);
}
