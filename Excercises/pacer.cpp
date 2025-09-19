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
        vector <ll> a(n+1), b(n+1);
        a[0] = 0; b[0]  = 0;
        for (ll i=1; i<=n; ++i) cin>> a[i]>>b[i];

        ll dem=0;
        ll index=0;

        dem += m-a[n];
        while (index + 1 <=n){

            ll times = a[index+1] - a[index];
            ll sides = abs(b[index+1] - b[index]);
            if ( (times%2) == (sides%2) ){
                dem+= a[index+1] - a[index];
                }
            else{
                dem+= a[index+1] - a[index] - 1;
            }
            ++index;
            }
        cout<<dem<<'\n';
    }
    return 0;
}