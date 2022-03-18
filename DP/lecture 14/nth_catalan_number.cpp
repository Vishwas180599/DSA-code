


// // class Solution
// // {
// //     public:
// //     //Function to find the nth catalan number.
// //     cpp_int findCatalan(int n) 
// //     {
// //         //code here
// //         return nthCatalan(n);
// //     }
    
// //     int nthCatalan(int n){
// //          if(n<=1){
// //              return 1;
// //              }
// //         int ways=0;
        
// //         for(int i=0;i<n;i++){
// //             ways+=nthCatalan(i)*nthCatalan(n-i-1);
// //         }
// //         return ways;
        
// //     }
// // };

// #include <bits/stdc++.h>

// class Solution
// {
//     public:
//     cpp_int ncatalan(int n, vector<cpp_int>&vec) {
//         if(n == 0 || n == 1) return 1;
//         int curr = n;
//         if(vec[curr]!=-1) return vec[curr];
       
        
//         cpp_int catalan = 0;
        
//         for(int i=0;i<n;i++) {
//             catalan += ncatalan(i, vec)*ncatalan(n-i-1, vec);
//         }
        
//         vec[curr] = catalan;
//         return vec[curr];
//     }
    
//     cpp_int findCatalan(int n) 
//     {
//         vector<cpp_int>vec(1001,-1);
//         return ncatalan(n, vec);
//     }
// };