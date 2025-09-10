#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://codeforces.com/problemset/problem/1185/A

int main(){
    init
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll tempt1 = abs(c-a);
    ll tempt2 = abs(c-b);

    ll tempt=0;

    if (tempt1 < d) tempt+= d-tempt1;
    if (tempt2 < d) tempt+= d- tempt2;

    cout<<tempt;
    return 0;
}