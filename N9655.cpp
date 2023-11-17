#include<iostream>

using namespace std;

void game(int x) {
	if (x % 2 == 0) {
		cout << "CY" << endl;
	}
	else {
		cout << "SK" << endl;
	}
}

int main(void) {
	int N;
	cin >> N;
	game(N);

	return 0;
}
