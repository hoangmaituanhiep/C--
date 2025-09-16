#include <bits/stdc++.h>
using namespace std;
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int max4(int a, int b, int c, int d){
    return max(a, max(b, max(c,d)));
}

int main(){
    init
    int n; cin>>n;
    vector<int> w(n), h(n);
    for (int i=0; i<n; ++i) cin>>w[i]>>h[i];

    vector<int> hcn(n);
    int th1 = w[0] + abs(h[1]-h[0]);
    int th2 = w[0] + abs(w[1] -h[0]);
    int th3 = h[0] + abs(w[1] - w[0]);
    int th4 = h[0] + abs(h[1] - h[0]);


    for (int i=1; i<n; ++i){
        int th1 = w[i] + abs(h[i]-h[i-1]);
        int th2 = w[i] + abs(w[i] -h[i-1]);
        int th3 = h[i] + abs(w[i] - w[i-1]);
        int th4 = h[i] + abs(h[i] - h[i-1]);

        hcn[i] = h[i-1] + max4(th1, th2, th3, th4);
    }
    cout<<hcn[n-1];
    return 0;
}