#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll BS_1(vector<ll> &array, ll low, ll high, ll pivot){
    ll mid = (low+high)/2;
    if (array[mid] == pivot) return mid;
    if (array[mid] > pivot) return BS_1(array, low, mid-1, pivot);
    if (array[mid] < pivot) return BS_1(array, mid+1, high, pivot);
    return -1;
}

ll BS_2(vector<ll> &array, ll pivot){
    ll left = 0;
    ll right = array.size() - 1;
    
    while (left < right){
        ll mid = (left+right)/2;

        if (array[mid] == pivot) return mid;
        if (array[mid] > pivot) right = mid - 1;
        else left = mid + 1;
    }
    
    return -1;
}

int main(){
    init
    ll n; cin>>n;
    ll pivot; cin>>pivot;
    vector<ll> a(n);
    for (ll i=0; i<n; ++i) cin>>a[i];

    ll index = BS_2(a, pivot);

    cout<<index;
    return 0;
}