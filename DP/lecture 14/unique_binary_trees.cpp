// class Solution {
// public:
//     int numTrees(int n) {
        
//         unordered_map<int,int> vec;
//         return ncatalan(n, vec);
//     }
        
// public:
//     int ncatalan(int n, unordered_map<int,int>&vec) {
//         if(n == 0 || n == 1) return 1;
//         int curr = n;
        
//        if(vec.find(curr)!=vec.end())
//            return vec[curr];
        
//         int catalan = 0;
        
//         for(int i=0;i<n;i++) {
//             catalan += ncatalan(i, vec)*ncatalan(n-i-1, vec);
//         }
        
//         vec[curr] = catalan;
//         return vec[curr];
//     }
    
   
// };