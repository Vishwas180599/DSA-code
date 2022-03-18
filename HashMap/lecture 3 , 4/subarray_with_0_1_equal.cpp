// https://practice.geeksforgeeks.org/problems/count-subarrays-with-equal-number-of-1s-and-0s-1587115620/1

// // class Solution{
// //   public:
// //     //Function to count subarrays with 1s and 0s.
// //     long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
// //     {
// //        int count=0;
// //         int prefixSum=0;
// //         long long int ans=0;
// //         unordered_map<int,int> mp;
        
// //         mp[prefixSum]=1;
// //         for(int i=0;i<n;i++){
// //             int currVal = arr[i];
              
// //            if(currVal==0)
// //               prefixSum+= -1;
// //            else
// //               prefixSum+=1;
           
// //            if(mp.find(prefixSum)!=mp.end()){
// //                ans+=mp[prefixSum];
// //                mp[prefixSum]+=1;
// //            }
// //            else{
// //                mp[prefixSum]=1;
// //            }
                
// //             }
        
// //         return ans;
       
    
        
// //     }
// // };