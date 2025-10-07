#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(0);

//https://marisaoj.com/problem/346

void Check(vector<ll> nums, ll k, int index = 0, ll tempt = 0){

    if (tempt == k) {
        cout<<"YES";
        exit(0);
    }
    if (index > nums.size()-1) return;

    Check(nums, k, index+1, tempt+nums[index]);
    Check(nums, k, index+1, tempt);
}

int main(){
    init

    int n; ll k;
    cin>>n>>k;
    vector<ll> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];

    Check(a, k);
    cout<<"NO";
    return 0;
}