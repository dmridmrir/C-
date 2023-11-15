#include<iostream>
#include<stack>

using namespace std;

int main(void) {
	stack<int> s;
	int K;
	int N;
	int result = 0;

	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> N;
		if (N == 0) {
			s.pop();
		}
		else {
			s.push(N);
		}
	}

	while (!s.empty()) {
		result += s.top();
		s.pop();
	}
	
	cout << result << endl;

	return 0;
}
