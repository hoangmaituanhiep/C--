#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://marisaoj.com/problem/70

int main(){
    init
    ll n,q,m; cin>>n>>q>>m;
    
    vector<ll> A(n+1,0);
    ll M[m][2];
    ll Q[q][2];
    for (ll i=0; i<q; ++i) cin>>Q[i][0]>>Q[i][1];
    for (ll i=0; i<m; ++i) cin>>M[i][0]>>M[i][1];

    for (ll i = 0; i<m; ++i){
        for (ll j = M[i][0] -1; j<M[i][1]; ++j){
            for (ll k = Q[j][0]-1; k<Q[j][1]; ++k) A[k]++;
        }
    }

    for (ll i=0; i<n; ++i) cout<<A[i]<<' ';

    return 0;
} 