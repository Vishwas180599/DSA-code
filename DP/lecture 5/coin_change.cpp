/*class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
       int ans = minCoins(coins,0,amount,dp);
        
        if(ans==100000){
            return -1;
        }
        return ans;
        
    }
    
public:
    int minCoins(vector<int>& coins,int currentIndex,int amount,vector<vector<int>>& dp){
        
        if(amount==0){
            return 0;
        }
        
        if(currentIndex>=coins.size()){
            return 100000; 
        }
        
        if(dp[currentIndex][amount]!=-1){
            return dp[currentIndex][amount];
        }
        int consider = 100000;
        
        if(coins[currentIndex]<=amount){
           consider = 1 + minCoins(coins,currentIndex,amount-coins[currentIndex],dp);
    }
        int notConsider = minCoins(coins,currentIndex+1,amount,dp);
        
        dp[currentIndex][amount]= min(consider,notConsider);
        return min(consider,notConsider);
    
    }
};*/