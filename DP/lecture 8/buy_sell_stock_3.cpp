/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        return bestTime(prices,0,1,2,dp);
    }
public:
    int bestTime(vector<int>& prices,int currentDay,bool canBuy,int TransCount,vector<vector<vector<int>>>& dp){
        
        if(currentDay>=prices.size() ||  TransCount<=0){
            return 0;
        }
        if(dp[currentDay][canBuy][TransCount]!=-1){
            return dp[currentDay][canBuy][TransCount];
        }
        if(canBuy){
            int idle = bestTime(prices,currentDay+1,canBuy,TransCount,dp);
            int buy = -prices[currentDay] + bestTime(prices,currentDay+1,false,TransCount,dp);
            return dp[currentDay][canBuy][TransCount]=max(idle,buy);
        }
        else{
            int idle = bestTime(prices,currentDay+1,canBuy,TransCount,dp);
            int sell = prices[currentDay] + bestTime(prices,currentDay+1,true,TransCount-1,dp);
            return dp[currentDay][canBuy][TransCount] = max(idle,sell);

        }
        
    }
};*/