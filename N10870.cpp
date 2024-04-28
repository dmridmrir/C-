#include <iostream>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int N;
int arr[3];
int result = 0;

int fibonacci(int n) {
    if (n >= 2) {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    else {
        return arr[n];
    }
}

int main() {
    FASTIO;
    arr[0] = 0, arr[1] = 1;

    cin >> N;

    cout << fibonacci(N);
    
  
    return 0;
}
