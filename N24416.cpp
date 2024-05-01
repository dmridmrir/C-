#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N;
int f[41];
int count1 = 0, count2 = 0;

int fib(int n) {
	if (n <= 2) {
		count1++;
		return 1;
	}
	else {
		return (fib(n - 1) + fib(n - 2));
	}
}

int fibonacci(int n) {
	for (int i = 3; i <= n; i++) {
		f[i] = f[i - 1] + f[i - 2];
		count2++;
	}
	return f[n];
}


int main(void) {
	FASTIO;

	f[1] = f[2] = 1;

	cin >> N;
	
	int a = fib(N);
	int b = fibonacci(N);

	cout << count1 << " " << count2 << endl;

	return 0;
}
