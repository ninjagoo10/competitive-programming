#include <bits/stdc++.h>
using namespace std;

bool beautiful_year(int n) {
    bool used[10] = {false};

    while (n > 0) {
        int digit = n % 10;
        if (used[digit]) {
            return false;
        }
        used[digit] = true;
        n/=10;
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    int cnt = n + 1;
    while (true) {
        if (beautiful_year(cnt)) {
            cout<<cnt;
            break;
        }
        cnt++;

    }
}
