// https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1

// zero_sum_subarray
// // class Solution{
// //   public:
// //     int maxLen(int arr[], int n)
// //    {
// //        unordered_map<int,int> mp;
        
// //         int prefixSum=0;
        
// //         int answer = 0;
        
// //         mp[prefixSum]=-1;
// //         for(int i=0;i<n;i++){
            
// //             int currVal =arr[i];
            
// //             if(currVal==0){
// //                 prefixSum+=-1;
// //             }
// //             else{
// //                 prefixSum+=1;
// //             }
            
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