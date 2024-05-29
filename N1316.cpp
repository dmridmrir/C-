#include <iostream>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

string str1;
int N,r;
int c = 0;

int main(void) {
	FASTIO;

	cin >> N;
	r = N;
next:
	
	while(N--){
		cin >> str1;

		for (int i = 0; i < str1.size()-1; i++) {
			bool isSeq = true;
			for (int j = i + 1; j < str1.size(); j++) {
				if (str1[i] != str1[j]) {
					isSeq = false;
					continue;
				}else if (isSeq == false) {
					c++;
					goto next;
				}
				
			}
		}


	}

	cout << r - c << endl;

	return 0;
}
