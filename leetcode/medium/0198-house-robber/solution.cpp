class Solution {
public:
    int fun(vector<int>& nums, vector<int>& dp, int idx) {

        if (idx < 0 )
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int take = nums[idx] + fun(nums,dp, idx - 2);
        int notTake = fun(nums,dp, idx - 1);

        return dp[idx] = max(take, notTake);

    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n + 1, -1);

        return fun(nums, dp, n-1);
    }
};