#include <iostream>
#include<string>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

string str1;
bool isPal = true;

int main(void) {
	FASTIO;

	cin >> str1;

	int middle = str1.size() / 2;

	for (int i = 0; i < middle; i++) {
		if (str1[i] != str1[str1.size()-1-i]) {
			isPal = false;
		}
	}

	if (isPal) {
		cout << "1" << endl;
	}
	else {
		cout << "0" << endl;
	}


	return 0;
}
