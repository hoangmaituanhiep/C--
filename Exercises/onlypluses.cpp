#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//https://mirror.codeforces.com/contest/1992/problem/A

int main(){
    init
    int t; cin>>t;
    while(t){
        int a,b,c; cin>>a>>b>>c;
        ll tempt;
        ll max_var=a*b*c;
        for (int i=0; i<=5; ++i){
            for (int j=0;j<=5-i; ++j){
                tempt = (a+i)*(b+j)*(c+5-j-i);
                max_var=max(tempt, max_var);
            }
        }
        cout<<max_var<<"\n";
        --t;
    }
    return 0;
}