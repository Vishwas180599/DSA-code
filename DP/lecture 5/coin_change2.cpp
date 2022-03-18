/*class Solution {
public:
    int change(int amount, vector<int>& coins) {
      
        unordered_map<string,int> mp;
      return totalWays(coins,0,amount,mp);
        
       
        
    }
    
public:
    int totalWays(vector<int>& coins,int currentIndex,int amount,unordered_map<string,int>& mp){
        
        if(amount==0){
            return 1;
        }
        
        if(currentIndex>=coins.size() ){
            return 0; 
        }
        
        string currentkey = to_string(currentIndex)+ ","+to_string(amount);
        
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        int consider = 0;
        
        if(coins[currentIndex]<=amount){
           consider =  totalWays(coins,currentIndex,amount-coins[currentIndex],mp);
    }
        int notConsider = totalWays(coins,currentIndex+1,amount,mp);
        
        mp[currentkey]= consider + notConsider;
        return mp[currentkey];
    
    }*/
    /*class Solution {
public:
    int change(int amount, vector<int>& coins) {
      
        vector<vector<int>>dp(coins.size()+1,vector<int> (amount+1,-1));
      return totalWays(0,coins,amount,dp);
        
       
        
    }
    
public:
    int totalWays(int currentIndex,vector<int>& coins,int amount,vector<vector<int>>&dp){
        
        if(amount==0){
            return 1;
        }
        
        if(currentIndex>=coins.size() ){
            return 0; 
        }
        
        //string currentkey = to_string(currentIndex)+ "_"+to_string(amount);
        if(dp[currentIndex][amount]!=-1){
            return dp[currentIndex][amount];
        }
       
        int consider = 0;
        
        if(coins[currentIndex]<=amount){
           consider =  totalWays(currentIndex,coins,amount-coins[currentIndex],dp);
    }
        int notConsider = totalWays(currentIndex+1,coins,amount,dp);
        
        return dp[currentIndex][amount]= consider + notConsider;
        
    }

    
};*/

    
