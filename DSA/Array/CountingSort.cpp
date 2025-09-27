#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    init
    ll n; cin>>n;
    vector<ll> arr(n); for (ll i=0;i<n;i++) cin>>arr[i];

    ll max_int = *max_element(arr.begin(), arr.end());

    vector<ll> tempt(max_int +1, 0);

    for (ll i = 0; i<n; ++i) tempt[arr[i]]++;
    ll index = 0;

    for (ll i=0; i<= max_int; ++i){
        while(tempt[i]){
            --tempt[i];
            arr[index++] = i;
        }
    }

    for (ll i =0; i<n; ++i) cout<<arr[i]<<' ';
    return 0;
}