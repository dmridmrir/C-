#include <iostream>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int N;

long long fact(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * fact(n - 1);
    }

}

int main() {
    FASTIO;

    cin >> N;

    cout << fact(N);
  
    return 0;
}
