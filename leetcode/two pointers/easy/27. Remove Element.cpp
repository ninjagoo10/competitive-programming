#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,val;
    cin >> n;
    cin>>val;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i]!=val) {
            swap(nums[i],nums[j]);
            j++;
        }
    }
    cout << nums.size();

}