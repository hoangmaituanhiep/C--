#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define l <<'\n';

//Find the Longest Common Subsequence in two strings
string x = "AGGTAB";
string y = "GXTXAYB";
// => "GTAB"

int lcs(string x, string y){
    int n1 = x.size();
    int n2 = y.size();

    vector<vector<int>> dp (n1+1, vector<int>(n2+1, 0));

    for (int i=0; i<=n1; i++){
        for (int j=0; j<=n2; j++){

            if (x[i-1] == y[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
            
            else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }

    return dp[n1][n2];
}

int main(){
    init

    cout<<lcs(x, y);
    return 0;
}