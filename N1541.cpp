#include <iostream>
#include<string>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

string str,num;
bool isMinus = false;
int result = 0;

int main(){
	FASTIO;

	cin >> str;

	for (int i = 0; i <= str.size(); i++) {

		if (str[i] == '+' || str[i] == '-' || i == str.size()) {
			if (isMinus) {
				result -= stoi(num);
				num = "";
			}
			else {
				result += stoi(num);
				num = "";
			}
		}else {
			num += str[i];
		}
		if (str[i] == '-') {
			isMinus = true;
		}
	}

	cout << result << "\n";


	return 0;
}
