// // class Solution {
// // public:
// //     int maximalSquare(vector<vector<char>>& matrix) {
        
// //         int m= matrix.size();
// //         int n = matrix[0].size();
        
// //         int area = 0;
// //         for(int currentRow = 0;currentRow<m;currentRow++){
// //             for(int currentCol=0;currentCol<n;currentCol++){
// //                 if(matrix[currentRow][currentCol]=='1'){
// //                     int side= maxArea(matrix,currentRow,currentCol,m,n);
// //                    area=max(area,side*side);
// //                 }
                
// //             }
// //         }
// //         return area;
        
// //     }
// // public:
// //     int maxArea(vector<vector<char>>& matrix,int currentRow,int currentCol,int m,int n){
// //         if(currentRow>=m||currentCol>=n|| matrix[currentRow][currentCol]=='0')
// //             return 0;
        
// //         int right = 1+ maxArea(matrix,currentRow,currentCol+1,m,n);
// //         int down = 1+ maxArea(matrix,currentRow+1,currentCol,m,n);
// //         int downRight = 1+ maxArea(matrix,currentRow+1,currentCol+1,m,n);
        
// //         return min(right,min(down,downRight));
        
       
// //     }
// // };





// class Solution {
// public:
//     int maximalSquare(vector<vector<char>>& matrix) {
        
//         int m= matrix.size();
//         int n = matrix[0].size();
        
//         unordered_map<string,int>mp;
//         int area = 0;
//         for(int currentRow = 0;currentRow<m;currentRow++){
//             for(int currentCol=0;currentCol<n;currentCol++){
//                 if(matrix[currentRow][currentCol]=='1'){
//                     int side= maxArea(matrix,currentRow,currentCol,m,n,mp);
//                    area=max(area,side*side);
//                 }
                
//             }
//         }
//         return area;
        
//     }
// public:
//     int maxArea(vector<vector<char>>& matrix,int currentRow,int currentCol,int m,int n,unordered_map<string,int>&mp){
//         if(currentRow>=m||currentCol>=n|| matrix[currentRow][currentCol]=='0')
//             return 0;
        
//         string currentkey = to_string(currentRow)+','+to_string(currentCol);
//         if(mp.find(currentkey)!=mp.end())
//             return mp[currentkey];
        
//         int right = 1+ maxArea(matrix,currentRow,currentCol+1,m,n,mp);
//         int down = 1+ maxArea(matrix,currentRow+1,currentCol,m,n,mp);
//         int downRight = 1+ maxArea(matrix,currentRow+1,currentCol+1,m,n,mp);
        
//         return mp[currentkey] = min(right,min(down,downRight));
        
       
//     }
// };