#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://codeforces.com/problemset/problem/2148/C

int main(){
    init
    int t; cin>>t;

    while(t--){
        ll n,m; cin>>n>>m;
        vector <ll> a(n), b(n);
        a[0] = 0; b[i]  = 0;
        for (ll i=1; i<=n; ++i) cin>> a[i]>>b[i];

        ll dem=0;

        if (m>a[n-1]){
            dem += m-a[n-1];
        }
    }
    return 0;
}