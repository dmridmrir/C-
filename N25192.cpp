#include <iostream>
#include<set>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

int N,count_gom=0;
set<string> message;
string str;

int main(void) {
	FASTIO;

	cin >> N;

	while (N>0) {
		cin >> str;

		if (str == "ENTER") {
			message.clear();
		}
		else if (message.find(str) == message.end()) {
			count_gom++;
			message.insert(str);
		}
		N--;
	}

	cout << count_gom << endl;

	return 0;
}
