#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://codeforces.com/problemset/problem/1185/A

ll check(ll &x, ll &y, ll k,ll &tempt){
    if (abs(x-y) <k){
        ++tempt;
        ++y;
        return check(x, y, k, tempt);
    }
    return 0;
}

int main(){
    init
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll tempt=0;
    check(a, b, d, tempt);
    check(a, c, d, tempt);
    cout<<tempt;
    return 0;
}