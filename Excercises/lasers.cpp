#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://codeforces.com/problemset/problem/2148/B

int main(){
    init
    int t; cin>>t;
    while(t--){
        ll n,m,x,y; cin>>n>>m>>x>>y;
        vector<ll> a(n), b(m);
        for (ll i = 0; i<n; ++i) cin>>a[i];
        for (ll i=0; i <m; ++i) cin>>b[i];

        cout<<m+n;
    }
    return 0;
}