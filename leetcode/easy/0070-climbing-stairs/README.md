# Climbing Stairs

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

 

 **Example 1:** 

```
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

```

 **Example 2:** 

```
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

```

 

 **Constraints:** 

- 1 <= n <= 45

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.5 MB (beats 45.31%)  
**Submitted:** 2026-11-05T15:03:37.341Z  

```cpp
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

        vector<int> dp(n + 1, -1);

        return fun(n, dp);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/climbing-stairs/)