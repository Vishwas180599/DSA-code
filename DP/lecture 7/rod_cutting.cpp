//https://practice.geeksforgeeks.org/problems/rod-cutting0840/1#
/*
class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        int ans=maximum_profit(price,n,0);
        return ans;
    }
    
 public:
 int maximum_profit(int price[],int n,int currentIndex){
     if( n==0){
         return 0;
     }
     if(currentIndex>=n){
         return 0;
     }
     int consider =0;
     int length= currentIndex+1;
     if (length<=n){
         consider = price[currentIndex]+maximum_profit(price,n-length,currentIndex);
     }
     int notconsider = maximum_profit(price,n,currentIndex+1);
     
     return max(consider,notconsider);
 }
};*/
/*class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>dp(n,vector<int>((n+1),-1));
        
        return maximum_profit(price,n,0,dp);
    }
    
 public:
 int maximum_profit(int price[],int n,int currentIndex,vector<vector<int>>& dp){
     if( n==0){
         return 0;
     }
     if(currentIndex>=n){
         return 0;
     }
     
     int consider =0;
     int currentlength= currentIndex+1;
     if(dp[currentIndex][n]!=-1){
         return dp[currentIndex][n];
     };
     if (currentlength<=n){
         consider = price[currentIndex]+maximum_profit(price,n-currentlength,currentIndex,dp);
     }
     int notconsider = maximum_profit(price,n,currentIndex+1,dp);
     dp[currentIndex][n]=max(consider,notconsider);
     return max(consider,notconsider);
 }
};*/