//https://leetcode.com/problems/min-cost-climbing-stairs/
/*
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int a= minCost(cost,0);
        int b= minCost(cost,1);
        
        return min(a,b);
    }
public:
    int minCost(vector<int> cost, int currentIndex){
         int n = cost.size() ;
        if(currentIndex== n){
            return 0;
        }
        if (currentIndex > n){
            return 1000;
        }
        
        int onestep = cost[currentIndex] + minCost(cost,currentIndex+1);
        int twostep = cost[currentIndex] + minCost(cost,currentIndex+2);
        
        return min(onestep,twostep);
    }
};*/

/*class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int> mp;
        int a= minCost(cost,0,mp);
        int b= minCost(cost,1,mp);
        
        return min(a,b);
    }
public:
    int minCost(vector<int>& cost, int currentIndex,unordered_map<int,int>& mp){
         int n = cost.size() ;
        if(currentIndex== n){
            return 0;
        }
        if (currentIndex > n){
            return 1000;
        }
        int currentkey = currentIndex;
        
        if (mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        int onestep = cost[currentIndex] + minCost(cost,currentIndex+1,mp);
        int twostep = cost[currentIndex] + minCost(cost,currentIndex+2,mp);
        
        mp[currentkey] = min(onestep,twostep);
        return mp[currentkey];
    }
};*/