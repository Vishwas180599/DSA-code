/*class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m = obstacleGrid.size();
        int n= obstacleGrid[0].size();
        
        return totalways(obstacleGrid,m,n,0,0);
     
        
    }
    
public:
    int totalways(vector<vector<int>>&obstacleGrid,int m,int n,int currentRow,int currentCol){
        
        if(currentRow>=m||currentCol>=n){
            return 0;
        }
        if(obstacleGrid[currentRow][currentCol]==1)
            return 0;
        if(currentRow==m-1 && currentCol==n-1){
            return 1;
        }
      
        int right = totalways(obstacleGrid,m,n,currentRow,currentCol+1);
        int down = totalways(obstacleGrid,m,n,currentRow+1,currentCol);
        return right+down;
//return mp[currentkey] = right+down;
    }
        
};*/
/*
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m = obstacleGrid.size();
        int n= obstacleGrid[0].size();
        unordered_map<string,int>mp;
        return totalways(obstacleGrid,m,n,0,0,mp);
     
        
    }
    
public:
    int totalways(vector<vector<int>>&obstacleGrid,int m,int n,int currentRow,int currentCol,unordered_map<string,int>&mp){
        
        if(currentRow>=m||currentCol>=n){
            return 0;
        }
        if(obstacleGrid[currentRow][currentCol]==1)
            return 0;
        if(currentRow==m-1 && currentCol==n-1){
            return 1;
        }
        string currentkey = to_string(currentRow)+","+ to_string(currentCol);
        
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
       
        int right = totalways(obstacleGrid,m,n,currentRow,currentCol+1,mp);
        int down = totalways(obstacleGrid,m,n,currentRow+1,currentCol,mp);
       
return mp[currentkey] = right+down;
    }
        
};*/