#include <iostream>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

#define MAX 101

int count_switch,count_people,gender,number;
int s[MAX];

void male(int* arr, int n) {
    for (int i = n; i <= count_switch; i += n) {
        arr[i] = arr[i] == 1 ? 0 : 1;
    }
}
void female(int* arr, int n) {

    arr[n] = arr[n] == 1 ? 0 : 1;

    int left = n - 1, right = n + 1;

    while (arr[left] == arr[right]) {
        if (left == 0 || right == count_switch+1 ) {
            return;
        }
        arr[left] = arr[left] == 1 ? 0 : 1;
        arr[right] = arr[right] == 1 ? 0 : 1;
        left--;
        right++;
    }
}

int main() {
    FASTIO;

    cin >> count_switch;
    for (int i = 1; i <= count_switch; i++) {
        cin >> s[i];
    }
    cin >> count_people;
    
    for (int i = 0; i < count_people; i++) {
        cin >> gender >> number;
        if (gender == 1) {
            male(s,number);
        }
        else if (gender == 2) {
            female(s, number);
        }
    }

    const int perline = 20;

    for (int i = 1; i <= count_switch; i++) {
        cout << s[i] << " ";
        if (i % perline == 0) {
            cout << endl;
        }
    }

    return 0;
}
