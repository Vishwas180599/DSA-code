// // { Driver Code Starts
// // Initial template for C++

// #include <bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends
// // User function template for C++

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

    


// // { Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<vector<int>> m(n, vector<int> (n,0));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 cin >> m[i][j];
//             }
//         }
//         Solution obj;
//         vector<string> result = obj.findPath(m, n);
//         sort(result.begin(), result.end());
//         if (result.size() == 0)
//             cout << -1;
//         else
//             for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
//         cout << endl;
//     }
//     return 0;
// }  // } Driver Code Ends