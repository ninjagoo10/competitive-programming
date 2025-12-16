#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> a(n);
    vector<int> res(2);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    int r = n - 1;
    while (l < r) {
        if (a[l] + a[r] == target) {
            res[0] = l + 1;
            res[1] = r + 1;
            break;
        }
        if (a[l] + a[r] < target) {
            l++;
        } else {
            r--;
        }
    }

    cout << res[0] << " " << res[1];
}
