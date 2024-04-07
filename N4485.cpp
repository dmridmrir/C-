#include <iostream>
#include<queue>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

#define MAX 126

int N;
int map[MAX][MAX];
int visited[MAX][MAX];

struct Point {
    int x;
    int y;
};

void initialize() {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            map[i][j] = 0;
            visited[i][j] = 12581250;
        }
    }
}

void solve(int start_x, int start_y) {
    int dx[] = { 0,0,-1,1 };
    int dy[] = { -1,1,0,0 };

    queue<Point> q;

    visited[start_x][start_y] = map[start_x][start_y];
    q.push({ start_x,start_y });

    while (!q.empty()) {
        int x = q.front().x;
        int y = q.front().y;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int next_x = x + dx[i];
            int next_y = y + dy[i];

            if (next_x < 0 || next_y < 0 || next_x >= N || next_y >= N) {
                continue;
            }
//(현재까지의 합 + 다음 위치 값)이 다음에 이미 저장되어 있는 합보다 크거나 같으면 패스
            if (visited[x][y] + map[next_x][next_y] >= visited[next_x][next_y]) {
                continue;
            }
            visited[next_x][next_y] = visited[x][y] + map[next_x][next_y];
            q.push({ next_x,next_y });
        }
    }

}

int main() {
    FASTIO;

    int count = 1;

    while (true) {
        cin >> N;

        if (N == 0) {
            break;
        }

        initialize();

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> map[i][j];
            }
        }

        solve(0, 0);

        cout << "Problem " << count << ": " << visited[N - 1][N - 1] << endl;
        count++;
    }

    return 0;
}
