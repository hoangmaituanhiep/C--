#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void merge(vector<ll>& array, ll left, ll mid, ll right){
    vector<ll> L,R;
    for (ll i=left; i<=mid; ++i) L.push_back(array[i]);
    for (ll i=mid+1; i<=right; ++i) R.push_back(array[i]);

    ll i=0, j=0;
    ll cnt=left;
    ll l_s = L.size(), r_s = R.size();

    while(i<l_s && j<r_s){
        if (L[i]<R[j])  array[cnt++] = L[i++];
        else            array[cnt++] = R[j++];
    }
    while(i<l_s)   array[cnt++] = L[i++];
    while(j<r_s) array[cnt++] = R[j++];
}

void mergesort(vector<ll>& array, ll left, ll right){
    if (left>=right) return;

    ll mid = left + (right-left)/2;

    mergesort(array, left, mid);
    mergesort(array, mid+1, right);
    merge(array, left, mid, right);
}

int main(){
    init

    vector<ll> arr = {5,2,5,7,2,1,9,6,8,10,35,21,1,6};
    ll n = arr.size();

    mergesort(arr, 0, n-1);

    for (ll i = 0; i<n; ++i){
        cout<<arr[i]<<' ';
    }

    return 0;
}