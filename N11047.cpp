#include <iostream>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int N, K,coin_count=0;
int coin[11];

int main() {
    FASTIO;
    
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        cin >> coin[i];
    }

    while (N > 0) {
        if (K >= coin[N]) {
            K -= coin[N];
            coin_count++;
        }
        else {
            N--;
        }
    }

    cout << coin_count << "\n";

    return 0;
}
