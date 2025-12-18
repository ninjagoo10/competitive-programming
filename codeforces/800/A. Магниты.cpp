#include <bits/stdc++.h>
using namespace std;
#define int long long


int32_t main() {
    int n;
    cin >> n;
    int c = 0;
    int curr, prev;
    cin>>prev;
    for (int i = 1;i<n;i++) {
        cin>>curr;
        if (curr!=prev) {
            c++;
        }
        prev = curr;
    }
    cout<<c+1;
}
