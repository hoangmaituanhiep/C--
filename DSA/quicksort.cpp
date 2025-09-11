#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll partition(vector<ll> &array,ll low,ll high){
    ll pivot = array[high];
    ll index=low;

    for (ll i= low; i<=high; ++i){
        if (array[i]<=pivot){
            ++index;
        }
    }
    swap(array[index], array[high]);
    return index;
}
void quicksort(vector<ll> &array, ll low, ll high){
    if (low< high){
        ll mid = partition(array, low, high);
        quicksort(array, mid+1, high);
        quicksort(array, low, mid-1);
    }
}


int main() {
    init
    ll n; cin>>n;
    vector<ll> array(n);
    for (ll i =0; i<n; ++i) cin>>array[i];

    quicksort(array, 0, n-1);

    for (ll i =0; i<n; ++i) cout<<array[i]<<" ";

    return 0;
}