// //O(n^2) Solution
// TLE Solution
// class Solution{
//     public:
//     int maxLen(vector<int>&A, int n)
//     {   
//         // Your code here
       
//         int prefixSum=0;
        
//         int answer = 0;
        
        
//         for(int i=0;i<n;i++){
//             prefixSum=0;
//             for (int j=i;j<n;j++){
                 
//             int currVal =A[j];
//             prefixSum+=currVal;
//             if(prefixSum==0){
//             int len = j-i+1;
//             answer=max(len,answer);
            
//             }
//             }
           
//             // if(mp.find(prefixSum)!=mp.end()){
//             //     int temp =i-mp[prefixSum];
//             //     answer  =max(answer,temp);
//             // }
//             // else{
//             //     mp[prefixSum]=i;
                
//             // }
//         }
//         return answer;
//     }
// };


// //O(n)  Solution

// optimal Solution

// // class Solution{
// //     public:
// //     int maxLen(vector<int>&A, int n)
// //     {   
// //         // Your code here
// //         unordered_map<int,int> mp;
        
// //         int prefixSum=0;
        
// //         int answer = 0;
        
// //         mp[prefixSum]=-1;
// //         for(int i=0;i<n;i++){
            
// //             int currVal =A[i];
// //             prefixSum+=currVal;
            
// //             if(mp.find(prefixSum)!=mp.end()){
// //                 int temp =i-mp[prefixSum];
// //                 answer  =max(answer,temp);
// //             }
// //             else{
// //                 mp[prefixSum]=i;
                
// //             }
// //         }
// //         return answer;
// //     }
// // };
