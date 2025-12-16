#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i]!=0) {
            swap(nums[i],nums[j]);
            j++;
        }
    }
    cout << nums.size();

}
