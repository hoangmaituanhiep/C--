#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://codeforces.com/problemset/problem/2148/D


int main(){
    init

    int t; cin>>t;
    while (t--){
        bool active = false;
        ll even = 0;
        ll dem = 0;

        ll n; cin>>n;
        vector<ll> a(n);
        for (ll i = 0; i<n; ++i){
            cin>>a[i];
            if (a[i] % 2 == 0){
                even += a[i];
                a[i] = 0;
            }
        }

        sort(a.begin(), a.end());
        if (a[n-1] % 2 == 1){
            active = true;
            dem += a[n-1] + even;
            for (ll i = 0; i<n-1; ++i){
                if (a[i]==0) continue;
                if (a[i] != 0 && active == true){
                    active = false;
                    continue;
                }
                else if (a[i] !=0 && active == false){
                    active = true;
                    dem += a[i];
                }
            }
            }
            cout<<dem<<'\n';
        }
    return 0;
}