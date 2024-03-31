#include <iostream>
#include<vector>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

vector<vector<int>> v;
int N;

void solve(int x, int y, int n) {
    int temp = 0;
    for (int i = x; i < x+n; i++) {
        for (int j = y; j < y+n; j++) {
            if (v[i][j] == 1) {
                temp++;
            }
        }
    }
    cout << "(";

    if (temp == 0) {
        cout << "0";
    }
    else if (temp == n * n) {
        cout << "1";
    }
    else {
        solve(x, y, n / 2);
        solve(x + n / 2, y, n / 2);
        solve(x, y + n / 2, n / 2);
        solve(x+ n / 2, y+ n / 2, n / 2);
    }
    cout << ")";

    return;
}

int main() {
    FASTIO;

    cin >> N;
    v.resize(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> v[i][j];
        }
    }

    solve(0, 0, N);


    return 0;
}
