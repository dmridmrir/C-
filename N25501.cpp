#include <iostream>
#include <string.h>
#define FASTIO  cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;

int T,c;
char str[1001];

int recursion(const char* s, int l, int r) {
    c++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    FASTIO;
    
    cin >> T;


    while (T--) {
        cin >> str;
        c = 0;
        cout << isPalindrome(str) << " " << c << "\n";
    }
  
    return 0;
}
