/*
author: Salohiddin
*/
#include<bits/stdc++.h>
using namespace std;
#define int int64_t
const int MOD = 1e9;
#define _USE_MATH_DEFINES

// int binary_search(vector<int> &x,int m) {
//     int l = 0;
//     int r = x.size() - 1;
//     int ans = -1;
//     while (l <= r) {
//         int mid = l + (r - l) / 2;
//
//         if (x[mid] <= m) {
//             ans = mid;
//             l = mid + 1;
//         } else {
//             r = mid - 1;
//         }
//     }
//     return ans+1;
// }


// int32_t main() {
//     int n;
//     cin >> n;
//     vector<int> x(n);
//     for (int i = 0; i < n; i++) {
//         cin >> x[i];
//     }
//     sort(x.begin(), x.end());
//
//     int q;
//     cin >> q;
//     while (q--) {
//         int m;
//         cin >> m;
//         int cnt  = upper_bound(x.begin(),x.end(),m)-x.begin();
//         cout<<cnt<<'\n';
//         // cout << binary_search(x, m) << "\n";
//     }
// }
