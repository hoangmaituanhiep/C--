#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define l <<'\n';

vector<int> nums = {12, 4, 62, 2, 45, 75, 23, 55, 67, 34, 65};
// => 4
vector<int> temp1 = {1, 2, 3, 4, 5};
// => 5
vector<int> temp2 = {5, 4, 3, 2, 1};
// => 1
vector<int> temp3 = {1, 3, 5, 4, 2};
// => 3
vector<int> temp4 = {5, 3, 1, 2, 4};
// => 3
vector<int> temp5 = {10, 22, 9, 33, 21, 50, 41, 60, 21};
// => 5

int lis(vector<int>& nums){
    int n = nums.size();
    vector<int> dp(n, 1);

    for (int i=1; i<n; i++){
        for (int j = 0; j<i; j++){

            if (nums[j] < nums[i] && dp[i] < dp[j]+1) {
                dp[i] = dp[j] + 1; 
            }
        }
    }

    sort(dp.begin(), dp.end());
    
    return dp[n-1];
}

int main()
{
    init

    cout<<lis(nums) l;
    cout<<lis(temp1) l;
    cout<<lis(temp2) l;
    cout<<lis(temp3) l;
    cout<<lis(temp4) l;
    cout<<lis(temp5) l;

    return 0;
}