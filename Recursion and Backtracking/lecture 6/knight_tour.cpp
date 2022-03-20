// #include<bits/stdc++.h>
// using namespace std;

// //function to display the 2-d array
// void display(vector<vector<int>>& chess) {
//   for (int i = 0; i < chess.size(); i++) {
//     for (int j = 0; j < chess.size(); j++) {
//       cout << chess[i][j] << " ";
//     }
//     cout << endl;
//   }
//   cout << endl;
// }

// void printKnightsTour(vector<vector<int>>& chess, int n, int r, int c, int upcomingMove) {
//   //write your code here
//   vector<int>answer;
//   knightTour(chess,r,c,upcomingMove,chess.size());
//   return;


// }
// void knightTour(vector<vector<int>>&chess,int curr_row,int curr_col,int upcomingMove,int n){
   
//     if (upcomingMove == n*n){ //isBaseCondition(chess)){
//         display(chess);
//         return;
//     }
//     if(curr_row<0 || curr_col<0 ||curr_row>=n ||curr_col>=n || chess[curr_row][curr_col]!=0){
//         return;
//     }
//     chess[curr_row][curr_col]==upcomingMove;
    
    
//     knightTour(chess,curr_row-2,curr_col+1,upcomingMove+1,n);
//     knightTour(chess,curr_row+2,curr_col+1,upcomingMove+1,n);
//      knightTour(chess,curr_row-2,curr_col-1,upcomingMove+1,n);
//     knightTour(chess,curr_row+2,curr_col-1,upcomingMove+1,n);
//      knightTour(chess,curr_row+1,curr_col+2,upcomingMove+1,n);
//     knightTour(chess,curr_row+1,curr_col-2,upcomingMove+1,n);
//      knightTour(chess,curr_row-1,curr_col+2,upcomingMove+1,n);
//     knightTour(chess,curr_row-1,curr_col-2,upcomingMove+1,n);
    
//     chess[curr_row][curr_col]=0;
//     return ;
    
// }

// bool isBaseCondition(vector<vector<int>>&chess){
//     for(int i=0;i<chess.size();i++){
//         for(int j=0;j<chess[0].size();j++){
//             if(chess[i][j]==0){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main() {

// }