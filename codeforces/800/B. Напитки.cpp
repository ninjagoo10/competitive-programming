#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main() {
    double n;
    cin >> n;
    double s = 0;
    vector<double> a(n);
    for (double i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    cout << fixed << setprecision(11) << s / n;
}
