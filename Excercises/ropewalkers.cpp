#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://codeforces.com/problemset/problem/1185/A


int main(){
    init
    ll a,b,c,d; cin>>a>>b>>c>>d;
    vector<ll> arr = {a, b, c};
    sort(arr.begin(), arr.end());

    ll tempt=0;

    if (arr[2] - arr[1] < d) tempt += d - arr[2] + arr[1];
    if (arr[1] - arr[0] < d) tempt += d - arr[1] + arr[0];
    
    cout<< tempt;
    return 0;
}