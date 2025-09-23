#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(0);

//https://oj.vnoi.info/problem/nd_thpt_2223_d

ll dem(ll n){
    ll dem=1;
    for (ll i=2; i<=sqrt(n); ++i){
        if (n%i == 0) dem+=1;
    }
    return dem;
}

int main(){
    init
    freopen("INPUT.INP", "r", stdin);
    //freopen("SDB.OUT", "w", stdout);

    long n; cin>>n;
    vector<ll> sdb(n);
    for (long i = 0; i<n; ++i) cin>>sdb[i];

    return 0;
}