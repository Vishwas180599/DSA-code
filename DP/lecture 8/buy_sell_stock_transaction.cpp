/*class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
   
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return bestTime(prices,0,1,fee,dp);
    }
public:
    int bestTime(vector<int>& prices,int currentDay,bool canBuy,int fee,vector<vector<int>>& dp){
        
        if(currentDay>=prices.size()){
            return 0;
        }
        if(dp[currentDay][canBuy]!=-1){
            return dp[currentDay][canBuy];
        }
        if(canBuy){
            int idle = bestTime(prices,currentDay+1,canBuy,fee,dp);
            int buy = -prices[currentDay] + bestTime(prices,currentDay+1,false,fee,dp);
            return dp[currentDay][canBuy]=max(idle,buy);
        }
        else{
            int idle = bestTime(prices,currentDay+1,canBuy,fee,dp);
            int sell = -fee + prices[currentDay] + bestTime(prices,currentDay+1,true,fee,dp);
            return dp[currentDay][canBuy] = max(idle,sell);

        }
        
    }
};
        
*/