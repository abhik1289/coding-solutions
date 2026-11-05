class Solution {
public:
    int fun(int n, vector<int>& dp) {

        if (n == 1 || n == 0)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = fun(n - 1, dp) + fun(n - 2, dp);
    }

    int climbStairs(int n) {

        // vector<int> dp(n + 1, -1);

        // dp[0] = 1;
        // dp[1] = 1;

        if (n == 1 || n == 0)
            return 1;

        int p1 = 1, p2 = 1;
        int curr = 0;
        for (int i = 2; i <= n; i++) {
            curr = p1 + p2;
            p1 = p2;
            p2 = curr;
        }

        // return fun(n, dp);
        return curr;
    }
};