#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://codeforces.com/problemset/problem/1185/A

ll check(ll &x, ll &y, ll k,ll &tempt){
    if (x==y) return 0;
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
    ll t = min(min(a,b),c);
    ll tempt=0;
    check(a, t, d, tempt);
    check(b, t, d, tempt);
    check(c, t, d, tempt);
    cout<<tempt;
    return 0;
}