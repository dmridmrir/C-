#include <iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int N, M;
string str;
vector <string> voca;
map<string, int>m;

bool compare(string a, string b) {
    if (a.size() == b.size() && m[a] == m[b]) {
        return a < b;
    }
    else if (m[a] == m[b]) {
        return a.size() > b.size();
    }
    return m[a] > m[b];
}

int main() {
    FASTIO;

    cin >> N >> M;

    while (N--) {
        cin >> str;
        if (str.size() < M) {
            continue;
        }
        if (str.length() >= M && m.find(str)==m.end()) {
            m[str] = 0;
            voca.push_back(str);
        }
        m[str]++;

    }
    sort(voca.begin(), voca.end(), compare);

    for (int i = 0; i < voca.size(); i++) {
        cout << voca[i] << '\n';
    }

    return 0;
}
