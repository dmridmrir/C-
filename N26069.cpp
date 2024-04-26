#include <iostream>
#include<map>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N, count_true = 0;
string str1, str2;
map<string, bool> check;

int main(void) {
	FASTIO;

	cin >> N;

	while (N > 0) {
		cin >> str1 >> str2;

		if (str1 == "ChongChong") {
			check.insert({ str1,true });
		}
		if (str2 == "ChongChong") {
			check.insert({ str2,true });
		}

		if (check[str1]) {
			check[str2] = true;
		}
		if (check[str2]) {
			check[str1] = true;
		}



		N--;
	}

	for (auto iter : check) {
		if (iter.second == true) {
			count_true++;
		}
	}

	cout << count_true << endl;

	return 0;
}
