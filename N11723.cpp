#include <iostream>
#include <string>
#define FASTIO cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;

class Cclac {
private:
    int arr[20];
    int size = sizeof(arr);
public:
    Cclac() {
        for (int i = 0; i < 20; i++) {
            arr[i] = 0;
        }
    }
    void add(int x) {
        arr[x - 1] = x;
    }
    void remove(int x) {
        arr[x - 1] = 0;
    }
    void check(int x) {
        if (arr[x - 1] == 0) {
            cout << "0" << endl;
        }
        else {
            cout << "1" << endl;
        }
    }
    void toggle(int x) {
        if (arr[x - 1] == 0) {
            add(x);
        }
        else {
            remove(x);
        }
    }
    void all() {
        for (int i = 0; i < size; i++) {
            arr[i] = i+1;
        }
    }
    void empty() {
        for (int i = 0; i < size; i++) {
            arr[i] = 0;
        }
    }
};

int main() {
    FASTIO;

    int M,X;
    string str;
    cin >> M;
    Cclac c;

    while (M > 0) {
        cin >> str;

        if (str == "add") {
            cin >> X;
            c.add(X);
        }
        else if (str == "remove") {
            cin >> X;
            c.remove(X);
        }
        else if (str == "check") {
            cin >> X;
            c.check(X);
        }
        else if (str == "toggle") {
            cin >> X;
            c.toggle(X);
        }
        else if (str == "all") {
            c.all();
        }
        else{
            c.empty();
        }

        M--;
    }


    return 0;
}
