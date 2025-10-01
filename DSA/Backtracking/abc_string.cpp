#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(0);

//https://marisaoj.com/problem/544

void Print(int n, string s){
    int tempt = s.size()-1;
    if (s.size() == n){
        cout<<s<<'\n';
        return;
    }
    
    for (char x : {'A', 'B', 'C'}){
        if (s[tempt] != x) Print(n,s+x);
    }
}

int main(){
    init
    int n; cin>>n;

    Print(n, "A");
    Print(n, "B");
    Print(n, "C");
    return 0;
}