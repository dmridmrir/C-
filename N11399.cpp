#include <iostream>
#include<vector>
#include<algorithm>>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int N,result=0;
vector<int> v;

int main(){
	FASTIO;

	cin >> N;
	
	while (N--) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		result += v[i];
		for (int j = 0; j < i; j++) {
			result += v[j];
		}
	}

	cout << result << "\n";

	return 0;
}
