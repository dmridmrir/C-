#include <iostream>
#include <string>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N;

int main(void) {
	FASTIO;

	cin >> N;

	int ans = 0;
	int temp = 0;

	for (int i = 1; i <= N; i++) {
		temp = i;
		ans = i;
		string s = to_string(i);
		for (int j = 0; j < s.size(); j++) {
			int num = s[j] - '0';
			ans += num;
		}	
		if (ans == N) {
			goto stop;
		}
		temp = 0;
	}

	stop:
	
	cout << temp << endl;

	return 0;
}
