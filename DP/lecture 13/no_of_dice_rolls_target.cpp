// // class Solution {
// // public:
// //     int numRollsToTarget(int n, int k, int target) {
// //         return totalWays(n,k,target);
// //     }
    
// //     int totalWays(int n,int k,int target){
        
// //         if(n== 0 && target!=0 )
// //             return 0;
        
// //         if(n==0 &&target==0)
// //             return 1;
        
// //         int ans=0;
// //         for(int current=1;current<=k;current++){
// //             int tempAns=totalWays(n-1,k,target-current);
// //              ans +=tempAns;
// //         }
// //         return ans;
// //     }
// // };

// class Solution {
// public:
//     #define MOD 1000000007
//     int numRollsToTarget(int n, int k, int target) {
        
//         vector<vector<int>>dp(32,vector<int>(1001,-1));
//         return totalWays(n,k,target,dp)%MOD;
//     }
    
//     int totalWays(int n,int k,int target,vector<vector<int>>&dp){
        
//         if(n== 0 && target!=0 )
//             return 0;
        
//         if(n==0 &&target==0)
//             return 1;
       
//         if(dp[n][target]!=-1)
//             return dp[n][target];
//         int ans=0;
//         for(int current=1;current<=k;current++){
//             if(current<=target){
//                 int tempAns=totalWays(n-1,k,target-current,dp);
//              ans=(ans%MOD +tempAns%MOD)%MOD;
//         }
//     }
//         return dp[n][target]=ans%MOD;
//     }
// };