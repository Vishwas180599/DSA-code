// class Solution {
// public:
//     void solveSudoku(vector<vector<char>>& board) {
//         sudokuSolver(board,0,0);
//         return ;
//     }
//     bool sudokuSolver(vector<vector<char>>&board,int curr_row,int curr_col){
//         if(curr_row==9)
//             return true;
        
        
//         int nextColpos , nextRowpos;
//         if(curr_col==8){
//              nextRowpos=curr_row+1;
//              nextColpos=0;
//         }
//         else{
            
//              nextRowpos =curr_row;
//              nextColpos = curr_col+1;
//         }
//         if(board[curr_row][curr_col]!='.')
//         {
//             return sudokuSolver(board,nextRowpos,nextColpos);
//         }
//              for(int currval=1;currval<10;currval++)
//         {
//             if(isValidCell(board,curr_row,curr_col,currval))
//             {
//                 board[curr_row][curr_col] = char(currval+'0');
                
//                 if(sudokuSolver(board,nextRowpos,nextColpos) == true)  
//                 {
//                     return true;
//                 }
//                 board[curr_row][curr_col] = '.';
//             }
//         }
//         return false;
//     }
    
//     bool isValidCell(vector<vector<char>>&board,int curr_row,int curr_col,int currval){
//         return isRowvalid(board,curr_row,currval) && isColvalid(board,curr_col,currval) && isSubgridvalid(board,curr_row,curr_col,currval);
//     }
//     bool isRowvalid(vector<vector<char>>&board,int curr_row,int currval){
//         for(int j=0;j<9;j++){
//             if(board[curr_row][j]==char(currval+'0'))
//                 return false;
//         }
//         return true;
//     }
    
//      bool isColvalid(vector<vector<char>>&board,int curr_col,int currval){
//         for(int i=0;i<9;i++){
//             if(board[i][curr_col]==char(currval+'0'))
//                 return false;
//         }
//         return true;
//     }
    
//     bool isSubgridvalid(vector<vector<char>>&board,int curr_row,int curr_col,int currval){
//        int x = 3*(curr_row/3);
//         int y = 3*(curr_col/3);
//         for(int i=0;i<3;i++)
//         {
//             for(int j=0;j<3;j++)
//             {
//                 if(board[x+i][y+j]== char(currval+'0'))
//                     return false;
//             }
//         }
//         return true;
//     }
    
    
// };