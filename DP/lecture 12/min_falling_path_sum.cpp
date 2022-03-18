// // class Solution {
// // public:
// //     int minFallingPathSum(vector<vector<int>>& matrix) {
// //    // code here
// //         int ans = 100001;
// //         int N = matrix[0].size();
// //         //vector<vector<int>>vec(501,vector<int>(501,-1));
// //         for(int i=0;i<N;i++)
// //         ans = min(ans,path(N,0,i,matrix));
// //         return ans;
// //     }
// //     public:
// // int path(int N,int curr_row ,int curr_col,vector<vector<int>>&matrix)
// // {
// //     if(curr_row>=N || curr_col>=N || curr_col<0 || curr_row<0) return 100001;
    
     
// //     // if(x<0 || y<0)
// //     //     return -1000001;
    
// //         if(curr_row==N-1)
// //         return matrix[curr_row][curr_col];
// //         //if(vec[curr_row][curr_col] != -1)
// //         //return vec[curr_row][curr_col];
// //         int d = matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col,matrix);
// //         int dl = matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col-1,matrix);
// //         int dr = matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col+1,matrix);
// //         //return vec[curr_row][curr_col] = max(d, max(dl,dr));
// //         return min(d,min(dl,dr));
// //     }

// // };





// class Solution {
// public:
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//    // code here
//         int ans = 100001;
//         int N = matrix[0].size();
//         //vector<vector<int>>vec(501,vector<int>(501,-1));
//         unordered_map<string,int> mp;
//         for(int i=0;i<N;i++)
//         ans = min(ans,path(N,0,i,matrix,mp));
//         return ans;
//     }
//     public:
// int path(int N,int curr_row ,int curr_col,vector<vector<int>>&matrix,unordered_map<string,int>&mp)
// {
//     if(curr_row>=N || curr_col>=N || curr_col<0 || curr_row<0) return 100001;
    
     
//     // if(x<0 || y<0)
//     //     return -1000001;
    
//         if(curr_row==N-1)
//         return matrix[curr_row][curr_col];
//     string currentkey = to_string(curr_row)+","+to_string(curr_col);
//     if(mp.find(currentkey)!=mp.end())
//         return mp[currentkey];
//         //if(vec[curr_row][curr_col] != -1)
//         //return vec[curr_row][curr_col];
//         int d = matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col,matrix,mp);
//         int dl = matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col-1,matrix,mp);
//         int dr = matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col+1,matrix,mp);
//         //return vec[curr_row][curr_col] = max(d, max(dl,dr));
//         return mp[currentkey]=min(d,min(dl,dr));
//     }

// };