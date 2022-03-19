
// class Solution{
//     public:
//     vector<string> findPath(vector<vector<int>> &m, int n) {
//         // Your code goes here
//         vector<string> answer;
//         generateAllPath(m,0,0,n,"",answer);
//         sort(answer.begin(),answer.end());
//         return answer;
//     }
    
//     void generateAllPath(vector<vector<int>>&m,int curr_row,int curr_col,int n,string current,vector<string>&answer){
//         if(curr_row<0 ||curr_row>=n || curr_col<0 ||curr_col>=n || m[curr_row][curr_col]==0){
//            return;
//         }
//         if(curr_row==n-1 && curr_col==n-1){
//             answer.push_back(current);
//             return ;
//         }
//         m[curr_row][curr_col] = 0;
        
//         //up move 
        
//         generateAllPath(m,curr_row-1,curr_col,n,current+"U",answer);
        
//          //right move 
       
//         generateAllPath(m,curr_row,curr_col+1,n, current+"R" ,answer);
        
//             //down move
       
//         generateAllPath(m,curr_row+1,curr_col,n, current+"D" ,answer);
         
//             //left move 
            
//         generateAllPath(m,curr_row,curr_col-1,n,current+"L" ,answer);
         
        
       
        
//         m[curr_row][curr_col]=1;
//         return ;
           
           
//     }
// };


// // class Solution{
// //     public:
// //     vector<string> findPath(vector<vector<int>> &m, int n) {
// //         // Your code goes here
// //         vector<string> answer;
// //         generateAllPath(m,0,0,n,"",answer);
// //         return answer;
// //     }
    
// //     void generateAllPath(vector<vector<int>>&m,int curr_row,int curr_col,int n,string current,vector<string>&answer){
// //         if(curr_row<0 ||curr_row>=n || curr_col<0 ||curr_col>=n || m[curr_row][curr_col]==0){
// //            return;
// //         }
// //         if(curr_row==n-1 && curr_col==n-1){
// //             answer.push_back(current);
// //             return ;
// //         }
// //         m[curr_row][curr_col] = 0;
        
// //         //up move 
// //         current+="U";
// //         generateAllPath(m,curr_row-1,curr_col,n,current,answer);
// //          current.pop_back();
// //          //right move 
// //         current+="R";
// //         generateAllPath(m,curr_row,curr_col+1,n,current ,answer);
// //         current.pop_back();
// //             //down move
// //         current+="D";
// //         generateAllPath(m,curr_row+1,curr_col,n,current ,answer);
// //          current.pop_back();
// //             //left move 
// //             current+="L";
// //         generateAllPath(m,curr_row,curr_col-1,n,current ,answer);
// //          current.pop_back();
        
       
        
// //         m[curr_row][curr_col]=1;
// //         return ;
           
           
// //     }
// // };