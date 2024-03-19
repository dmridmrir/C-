#include <iostream>
using namespace std;

int height[20];

int main(void) {
	int P,N;
	int count;
	cin >> P;

	for (int i = 0; i < P; i++) {
		cin >> N;
		count = 0;
		for (int j = 0; j < 20; j++) {
			cin >> height[j];
		}
		for (int j = 0; j < 20; j++) {
			for (int k = j; k < 20; k++) {
				if (height[j] > height[k]) {
					count++;
				}
			}
		}

		cout << i + 1<<" " << count << endl;
	}

	return 0;
}
