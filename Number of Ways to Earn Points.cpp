int MOD = 1e9 + 7;
class Solution {
public:
    int waysToReachTarget(int target, vector<vector<int>>& types) {
        vector<int> dp(target + 1);
    dp[0] = 1;
    for (auto& t : types) {
        for (int i = target; i >= 0; i--) {
            for (int j = 1; j <= t[0] && i - j * t[1] >= 0; j++) {
                dp[i] = (dp[i] + dp[i - j * t[1]]) % MOD;
            }
        }
    }
    return dp[target];
    }
};
