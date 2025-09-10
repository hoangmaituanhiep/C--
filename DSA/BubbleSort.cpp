#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    init
    
    freopen("input.INP", "r", stdin);
    freopen("output.OUT", "w", stdout);

    ll n; cin>>n;
    vector<ll> a(n);
    for (ll i=0; i<n; ++i) cin>>a[i];

    bool swapped;

    for (ll i =0; i<n-1; ++i){

        swapped = false;

        for (ll j = 0; j<n-i-1; ++j){ // this is because the last i elements are already sorted
//nice job copilot
            if (a[j] > a[j+1]){
                a[j] = a[j] + a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];

                swapped = true;
            }
        }
        if (!swapped) break;
    }

    for (ll i=0; i<n; ++i) cout<<a[i]<<" ";
    
    return 0;
}
