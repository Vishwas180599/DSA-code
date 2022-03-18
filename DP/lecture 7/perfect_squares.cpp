/*class Solution {
public:
    int numSquares(int n) {
        return numreq(1,n);
    }
public:
    int numreq(int currentIndex,int target){
        if(target==0){
            return 0;
        }
        if(target-(currentIndex*currentIndex)<0){
            return 10001;
        }
        
        int consider=10001;
        if(target-(currentIndex*currentIndex)>=0){
            consider = 1+numreq(currentIndex,target-(currentIndex*currentIndex));
        }
        int notconsider =numreq(currentIndex+1,target);
        
        return min(consider,notconsider);
    }
};*/
/*class Solution {
public:
    int numSquares(int n) {
        vector<vector<long>>dp(sqrt(n)+10,vector<long>(n+1,-1));
        return numreq(1,n,dp);
    }
public:
    int numreq(int currentIndex,int target,vector<vector<long>>&dp){
        if(target==0){
            return 0;
        }
        if(target-(currentIndex*currentIndex)<0){
            return 10001;
        }
        if(dp[currentIndex][target]!=-1){
            return dp[currentIndex][target];
        }
        int consider=10001;
        if(target-(currentIndex*currentIndex)>=0){
            consider = 1+numreq(currentIndex,target-(currentIndex*currentIndex),dp);
        }
        int notconsider =numreq(currentIndex+1,target,dp);
        dp[currentIndex][target]=min(consider,notconsider);
        return min(consider,notconsider);
    }
};*/