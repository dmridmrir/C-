#include <iostream>
#include<string>
#include<time.h>
using namespace std;

void swap(int *x, int *y) {
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void) {
	int a = 2;
	int b = 3;

	swap(&a, &b);

	cout << a << b << endl;


	return 0;
}
