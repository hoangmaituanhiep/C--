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

        sort(a.begin(), a.end(), greater<ll>());
        for (ll i = n - 1; i>=0; i--)
            if (a[i] == 0) a.pop_back();
        if (!a.empty() && a[0] % 2 != 0){
            active = true;
            dem += a[0] + even;
            ll tempt_index = (a.size())/2;

            if (a.size() % 2 == 0){
                for (ll i = 1; i < tempt_index; ++i){
                    dem+=a[i];
                } // 0 0 0 0 0 0
            }
            else{
                for (ll i = 1; i <= tempt_index; ++i){
                    dem+=a[i];
                } // 0 0 0 0 0
            }
        }
        cout<<dem<<'\n';
    }
    return 0;
}