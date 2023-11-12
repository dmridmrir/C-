#include <iostream>

using namespace std;

void sumpro(int* arr, int n, int &sum, int &pro) {

	for (int i = 0; i < n; i++) {
		sum += arr[i];
		pro *= arr[i];
	}
}

int main(void) {
	int sum = 0;
	int pro = 1;
	int *arr;

	arr = new int[5];
	for (int i = 0; i < 5; i++) {
		arr[i] = i+1;
	}

	sumpro(arr, 5, sum, pro);

	cout << sum << "\t" << pro << endl;

	delete arr;

	return 0;
}
