#include <iostream>
#include <queue>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N,temp;
queue<int> q;

int main(void) {
	FASTIO;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (true) {
		if (q.size() == 1) {
			cout << q.front() << endl;
			break;
		}
		else if (q.size() == 2) {
			cout << q.back() << endl;
			break;
		}
		else {
			q.pop();
			temp = q.front();
			q.pop();
			q.push(temp);
		}
	}


	return 0;
}
