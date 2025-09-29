#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class RandomExercises{
    private:

        ll partition(vector<ll> &nums, ll low, ll high) {
            ll index = low;
            ll pivot = nums[high];
            for (ll i=low; i<=high; ++i){
                if (nums[i] <= pivot){
                    nums[i] = nums[i] ^ nums[index];
                    nums[index] = nums[i] ^ nums[index];
                    nums[i] = nums[i] ^ nums[index];
                    index = i;
                }
            }
            nums[index] = nums[index] ^ nums[high];
            nums[high] = nums[index] ^ nums[high];
            nums[index] = nums[index] ^ nums[high];
            return index;
        }
        void quicksort(vector<ll> &nums, ll low, ll high){
            if (low<high){
                ll tempt = partition(nums, low, high);
                quicksort(nums, low, tempt-1);
                quicksort(nums, tempt+1, high);
            }
        }
    public:
        vector<ll> nums;
        ll k;

        int SolveProblem(vector<ll> &nums, ll k){
            //Write some code bro
            ll index = nums.size();
            quicksort(nums, 0, index-1);
            return nums[index - k];
        }
};

int main() {
    init

    RandomExercises highest_k_index;
    highest_k_index.nums = {4,6,2,6,2,4,6,8};
    highest_k_index.k = 2;
    cout<<highest_k_index.SolveProblem(highest_k_index.nums, highest_k_index.k);
    return 0;
}