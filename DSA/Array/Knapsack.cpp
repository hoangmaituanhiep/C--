#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define l <<'\n';

//Find the maximum total value without exceeding weight limit
vector<int> weights = {2, 5, 3, 8, 4, 6, 7, 3, 1, 9};
vector<int> values = {12, 15, 19, 11, 14, 16, 17, 13, 18, 10};
int limit = 12;

int recur_approach(vector<int>& weight, vector<int>& value, int limit, int n){
    //The most basic and understandable approach

    //Base case
    if (n == 0 || limit <= 0) return 0;
    
    int pick = 0;

    if (weight[n-1] <= limit){
        //Get the pick value from recursion which obviously starts from 0
        pick = value[n-1] + recur_approach(weight, value, limit-weight[n-1], n-1);
    }

    //Skip the current value to the next step
    //Next step will be pick or dont pick which, allegedly, starts from 0
    int dnt_pick = 0 + recur_approach(weight, value, limit, n-1);

    //Get the max value
    return max(pick, dnt_pick);
}


int dp_memoization(vector<int>& weight, vector<int>& value, int limit, int n, vector<vector<int>>& dp){
    /*Although this approach still using recursion.
    It's still better due to the value is stored in a vector.
    This will not require the algorithsm to calculate in recursion approach*/

    if (n==0 || limit <= 0) return 0;

    //Check if encountering the calculated
    if (dp[n][limit] != -1) return dp[n][limit];

    int pick = 0;

    if (weight[n-1] <= limit)
        pick = value[n-1] + dp_memoization(weight, value, limit-weight[n-1], n-1, dp);

    int dnt_pick = dp_memoization(weight, value, limit, n-1, dp); 

    //This is the end of the vector
    return dp[n][limit] = max(pick, dnt_pick);
}


int dp_tabulation(vector<int>& weight, vector<int>& value, int limit){
    /*This is the optimal solution.
    No recursion, no function-calling.
    So the time is O(limit*size)*/
    int n = weight.size();
    vector<vector<int>>dp (n+1, vector<int>(limit+1));

    for (int i=0; i<=n; i++){
        for (int j=0; j<=limit; j++){

            if (i == 0 || j == 0) dp[i][j] = 0;

            else {
                int pick = 0;

                if (j >= weight[i-1])
                    pick = value[i-1] + dp[i-1][j - weight[i-1]];
                
                int dnt_pick = dp[i-1][j];

                dp[i][j] = max(pick, dnt_pick);
            }
        }
    }
    return dp[n][limit];
}

int true_knapsack(vector<int>& weight, vector<int>& value, int limit){
    //This is the most optimal and expected solution

    /*
    The final result will look like this:
    -   dp[0] = 0
    -   dp[limit] = result
    */
    vector<int> dp(limit+1, 0);

    for (int i=1; i<weight.size()+1; i++){
        //The first loop to iterate through value vector
        
        for (int j=limit; j >= weight[i-1]; j--){
            //The second loop is calculating and updating the result for each weight and value at index i

            //Max to find the highest value between pick and dont pick
            dp[j] = max(dp[j], value[i-1] + dp[j-weight[i-1]]);
        }
    }

    return dp[limit];
}

int main(){
    init

    int n = weights.size();

    cout<<"Using Recursion:" l
    cout<<recur_approach(weights, values, limit, n);

    cout<<"\nUsing DP_Memorization: " l
    vector<vector<int>> dp(n+1, vector<int>(limit+1, -1));
    cout<<dp_memoization(weights, values, limit, n, dp);

    cout<<"\nUsing DP_Tabulation: " l
    cout<<dp_tabulation(weights, values, limit);

    cout<<"\nThe True 0/1 Knapsack Problem: " l
    cout<<true_knapsack(weights, values, limit);

    return 0;
}