class Solution {
    vector <int> dp;

    int helper(int n)
    {
        if(n==0) return 0;

        if(dp[n] != -1)
        return dp[n];

        int min_count = INT_MAX;

        for(int i=1; i*i<=n; i++)
        {
            int res = 1 + helper(n-i*i);
            min_count = min(min_count, res);
        }

        return dp[n] = min_count;
    }
public:
    int numSquares(int n) {
        dp.assign(n+1,-1);
        return helper(n);
    }
};