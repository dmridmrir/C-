#include <iostream>
#include<string>
#include<time.h>
using namespace std;

void square(int* ary) {
	for (int i = 0; i < 5; i++) {
		ary[i] = i * i;
	}
}

int main(void) {
	
	int ary[5];

	square(ary);

	for (int i = 0; i < 5; i++) {
		cout << ary[i] << endl;
	}

	return 0;
}
