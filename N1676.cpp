#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

int N;
int res = 0;

int main(void) {
	FASTIO;
	cin >> N;
	
	res += (N / 5) + (N / 25) + (N / 125);

	cout << res << endl;

	return 0;
}
