#include <iostream>
#include <map>
#define FASTIO cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
using namespace std;

string sub[21],grade[21];
double score[21];
int N = 20;
double c = 0.0;
double res = 0.0;
map <string, double> m;

int main(void) {
	FASTIO;

	m.insert(pair<string, double>("A+", 4.5));
	m.insert(pair<string, double>("A0", 4.0));
	m.insert(pair<string, double>("B+", 3.5));
	m.insert(pair<string, double>("B0", 3.0));
	m.insert(pair<string, double>("C+", 2.5));
	m.insert(pair<string, double>("C0", 2.0));
	m.insert(pair<string, double>("D+", 1.5));
	m.insert(pair<string, double>("D0", 1.0));
	m.insert(pair<string, double>("F", 0.0));

	for (int i = 0; i < N; i++) {
		cin >> sub[i] >> score[i] >> grade[i];
	}

	for (int i = 0; i < N; i++) {
		if (grade[i] != "P") {
			res += score[i] * m[grade[i]];
			c += score[i];
		}
	}

	cout << res / c << endl;

	return 0;
}
