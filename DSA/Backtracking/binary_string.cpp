#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(0);

//https://marisaoj.com/problem/543

void Print(int n, string s){
    if (s.size() == n){
        cout<<s<<'\n';
    }
    else{
        Print(n, s+"0");
        Print(n, s+"1");
    }
}

int main(){
    init
    int n; cin>>n;
    Print(n, "0");
    Print(n, "1");
    return 0;
}