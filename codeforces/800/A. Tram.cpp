#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int curr=0;
    int max_gap = 0;
    while (n--) {
        int a, b;
        cin >> a >> b;
        curr -= a;
        curr += b;
        max_gap = max(curr, max_gap);
    }
    cout << max_gap;
}
