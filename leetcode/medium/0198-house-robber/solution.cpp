class Solution {
public:
    int fun(vector<int>& nums, vector<int>& dp, int idx) {

        if (idx >= nums.size())
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int take = nums[idx] + fun(nums,dp, idx + 2);
        int notTake = fun(nums,dp, idx + 1);

        // cout << idx << take << endl;
        // cout << idx << notTake << endl;
        return dp[idx] = max(take, notTake);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n + 1, -1);

        return fun(nums, dp, 0);
    }
};