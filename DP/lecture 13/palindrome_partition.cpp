// // // class Solution {
// // // public:
// // //     int minCut(string s) {
// // //         return minimumcut(s,0,s.size()-1);
// // //     }
    
// // //     bool isPalindrome(string&s,int start ,int end){
// // //         while(start<end){
// // //             if(s[start]!=s[end])
// // //                 return false;
// // //             start++;
// // //             end--;
// // //         }
// // //         return true;
// // //     }
    
// // //     int minimumcut(string s,int start,int end){
        
// // //         if(isPalindrome(s,start,end))
// // //             return 0;
// // //         if(start>end)
// // //             return 0;
        
// // //         int ans=1000000000;
// // //         for(int i=start;i<end;i++){
// // //             int leftHalf=minimumcut(s,start,i);
// // //             int rightHalf=minimumcut(s,i+1,end);
// // //             int tempAns=1+leftHalf+rightHalf;
// // //             ans=min(ans,tempAns);
// // //         }
// // //         return ans;
// // //     }
    
// // // };

// class Solution {
// public:
//     int minCut(string s) {
//         vector<vector<int>>dp(2001,vector<int>(2001,-1));
//         return minimumcut(s,0,s.size()-1,dp);
//     }
    
//     bool isPalindrome(string&s,int start ,int end){
//         while(start<end){
//             if(s[start]!=s[end])
//                 return false;
//             start++;
//             end--;
//         }
//         return true;
//     }
    
//     int minimumcut(string s,int start,int end,vector<vector<int>>&dp){
        
//         if(isPalindrome(s,start,end))
//             return 0;
//         if(start>end)
//             return 0;
        
//        if(dp[start][end]!=-1)
//            return dp[start][end];
        
           
//         int ans=1000000000;
           
//         for(int i=start;i<end;i++){
//             if (isPalindrome(s, start, i)){
//             int leftHalf=minimumcut(s,start,i,dp);
//             int rightHalf=minimumcut(s,i+1,end,dp);
//             int tempAns=1+leftHalf+rightHalf;
            
//             ans=min(ans,tempAns);
//             }
//         }
//         return dp[start][end]=ans;
//     }
    
// };


// // class Solution {
// // public:
// //     int minCut(string s) {
// //         unordered_map<string,int>mp;
// //         return minimumcut(s,0,s.size()-1,mp);
// //     }
    
// //     bool isPalindrome(string&s,int start ,int end){
// //         while(start<end){
// //             if(s[start]!=s[end])
// //                 return false;
// //             start++;
// //             end--;
// //         }
// //         return true;
// //     }
    
// //     int minimumcut(string s,int start,int end,unordered_map<string,int>&mp){
        
// //         if(isPalindrome(s,start,end))
// //             return 0;
// //         if(start>end)
// //             return 0;
// //         string currentkey=to_string(start)+","+to_string(end);
// //         if(mp.find(currentkey)!=mp.end())
// //            return mp[currentkey];
           
// //         int ans=1000000000;
           
// //         for(int i=start;i<end;i++){
// //             if (isPalindrome(s, start, i)){
// //             int leftHalf=minimumcut(s,start,i,mp);
// //             int rightHalf=minimumcut(s,i+1,end,mp);
// //             int tempAns=1+leftHalf+rightHalf;
            
// //             ans=min(ans,tempAns);
           
// //             }
// //         }
// //         return  mp[currentkey]=ans;
// //     }
    
// // };