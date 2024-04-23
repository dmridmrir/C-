#include <iostream>
#include<string>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;


int main(void) {
	FASTIO;
	int N;
	int count = 0;
	cin >> N;

	for (int n = 666; ; n++) {
		string title = to_string(n);

		if (title.find("666") != -1) {
			count++;
		}
		if (N == count) {
			cout << n << endl;
			return 0;
		}
	}

	return 0;
}
