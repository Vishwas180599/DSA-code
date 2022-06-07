// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
             
//         int rows=matrix.size();
//         int col=matrix[0].size();
        
//         int start=0;
//         int end=rows*col - 1;
        
//         while(start<=end){
//             int mid = start +(end -start)/2;
            
//             int currentRow = mid/col;
//             int currentCol = mid%col;
            
//             if(matrix[currentRow][currentCol]==target)
//                 return true;
//             if(matrix[currentRow][currentCol]<target)
//                 start=mid+1;
//             else
//                 end=mid-1;
            
            
//         }
//         return false;
    
        
        
//     }
// };