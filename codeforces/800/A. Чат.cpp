#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string hello = "hello";
    int j = 0;
    for (auto ch : s) {
        if (ch == hello[j]) {
            j++;
        }
        if (j == hello[j]) {
            break;
        }
    }
    if (j == hello.size()) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}