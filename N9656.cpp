#include<iostream>

using namespace std;

void game(int N) {
	if (N % 2 == 0) {
		cout << "SK" << endl;
	}
	else {
		cout << "CY" << endl;
	}
}

int main(void) {
	int N;
	cin >> N;

	game(N);
	
	return 0;
}
