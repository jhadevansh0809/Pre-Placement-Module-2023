class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+1, 1);
        for(int i=3;i<n+1;i++){
            for(int j=1;j<i;j++){
                dp[i]=max({dp[i], j*dp[i-j], j*(i-j)});
            }     
        }
        
        return dp[n];
    }
};