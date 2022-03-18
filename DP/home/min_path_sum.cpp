// // class Solution {
// // public:
// //     int minPathSum(vector<vector<int>>& grid) {
// //         int m = grid.size();
// //         int n = grid[0].size();
// //         return totalWay(grid,0,0,m,n);
        
// //     }
// // public:
// //     int totalWay(vector<vector<int>>&grid,int currentRow,int currentCol,int m,int n){
// //         if(currentRow>=m||currentCol>=n||currentRow<0||currentCol<0)
// //             return 100001;
        
// //         if(currentRow==m-1&&currentCol==n-1)
// //             return grid[currentRow][currentCol];
        
// //         int rightMove=  grid[currentRow][currentCol] + totalWay(grid,currentRow,currentCol+1,m,n);
// //         int downMove =  grid[currentRow][currentCol] + totalWay(grid,currentRow+1,currentCol,m,n);
        
// //         return min(rightMove,downMove);
// //     }
// // };



// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
        
//         unordered_map<string,int> mp;
//         return totalWay(grid,0,0,m,n,mp);
        
//     }
// public:
//     int totalWay(vector<vector<int>>&grid,int currentRow,int currentCol,int m,int n,  unordered_map<string,int>& mp){
//         if(currentRow>=m||currentCol>=n||currentRow<0||currentCol<0)
//             return 100001;
        
//         if(currentRow==m-1&&currentCol==n-1)
//             return grid[currentRow][currentCol];
        
//         string currentkey = to_string(currentRow)+','+to_string(currentCol);
        
//         if(mp.find(currentkey)!=mp.end())
//             return mp[currentkey];
        
//         int rightMove=  grid[currentRow][currentCol] + totalWay(grid,currentRow,currentCol+1,m,n,mp);
//         int downMove =  grid[currentRow][currentCol] + totalWay(grid,currentRow+1,currentCol,m,n,mp);
        
//         return mp[currentkey]=min(rightMove,downMove);
//     }
// };