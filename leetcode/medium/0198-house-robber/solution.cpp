class Solution {
public:
    int fun(vector<int>& nums, vector<int>& dp, int idx) {

        if (idx < 0)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int take = nums[idx] + fun(nums, dp, idx - 2);
        int notTake = fun(nums, dp, idx - 1);

        return dp[idx] = max(take, notTake);
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n + 1, -1);

        if (n == 1)
            return nums[0];

        if (n == 2)
            return max(nums[0], nums[1]);

        dp[0] = nums[0], dp[1] = nums[1];

        for (int i = 2; i < n; ++i) {
            int take = nums[i] + dp[i - 2];
            int notTake = dp[i - 1];
            dp[i] = max(take, notTake);
        }

        // return fun(nums, dp, n-1);

        return dp[n - 1];
    }
};