//https://leetcode.com/problems/climbing-stairs/

/*class Solution {
public:
    int climbStairs(int n) {
        return totalWays(0,n);
        
    }
    
public:
    int totalWays(int currentStairs,int targetStairs){
        if(currentStairs== targetStairs){
            return 1;
        }
        if(currentStairs>targetStairs){
            return 0;
        }
        
        int onestep = totalWays(currentStairs+1,targetStairs);
        int twostep = totalWays(currentStairs+2,targetStairs);
        
        return onestep + twostep;
    }
};*/

//dp
/*class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int> mp;
        return totalWays(0,n,mp);
        
    }
    
public:
    int totalWays(int currentStairs,int targetStairs,unordered_map<int,int>& mp){
        if(currentStairs== targetStairs){
            return 1;
        }
        if(currentStairs>targetStairs){
            return 0;
        }
      
        
        if(mp.find(currentStairs)!=mp.end()){
            return mp[currentStairs];
    }
        int onestep = totalWays(currentStairs+1,targetStairs,mp);
        int twostep = totalWays(currentStairs+2,targetStairs,mp);
        
        mp[currentStairs]=onestep +twostep;
        return mp[currentStairs];
    }
};*/