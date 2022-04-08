// class Solution {
// public:
//     int maxAreaOfIsland(vector<vector<int>>& grid) {
//       int m= grid.size();
//         int n = grid[0].size();
//         int answer=0 ;
        
//         for(int currentRow=0;currentRow<m;currentRow++){
//             for(int currentCol=0;currentCol<n;currentCol++){
                
//                 if(grid[currentRow][currentCol]==1){
                   
//                      answer = max(answer,sinkIsland(grid,currentRow,currentCol,m,n));
//                 }
//             }
//         }
//         return  answer;
        
        
//     }
// int sinkIsland(vector<vector<int>>&grid,int currentRow,int currentCol,int m,int n){
    
//     if(currentRow<0 || currentRow>=m || currentCol<0||currentCol>=n||grid[currentRow][currentCol]==0)
//         return 0;
    
//     grid[currentRow][currentCol]=0;
//     //up
//     int a= sinkIsland(grid,currentRow-1,currentCol,m,n);
//     //right
//     int b=sinkIsland(grid,currentRow,currentCol+1,m,n);
//     //down
//     int c=sinkIsland(grid,currentRow+1,currentCol,m,n);
//     //left
//     int d=sinkIsland(grid,currentRow,currentCol-1,m,n);
    
//     return (1+a+b+c+d);

// }
// };