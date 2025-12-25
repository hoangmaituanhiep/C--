#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://codeforces.com/problemset/problem/2148/A


int main(){
    init
    int t; cin>>t;

    while(t--){
        int x, n; cin>>x>>n;

        x = n%2==0? 0 : x;

        cout<<x<<'\n';
    }
    return 0;
}