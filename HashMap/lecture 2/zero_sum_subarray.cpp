// // https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1/#
// // TC: O(n^2)
// TLC
// // class Solution{
// //     public:
// //     //Function to count subarrays with sum equal to 0.
// //     ll findSubarray(vector<ll> arr, int n ) {
// //         //code here
// //         ll count=0;
// //         vector<ll> total;
// //         for(ll i=0;i<arr.size();i++){
// //             total.push_back(arr[i]);
// //             ll sum=0;
           
// //             for(ll j=i;j<arr.size();j++){
// //                 sum+=arr[j];
// //                 if(sum==0){
// //                     count+=1;
                   
// //                 }
                 
                
// //             }
// //         }
// //         return count;
// //     }
// // };



// TC: O(n)
// class Solution{
//     public:
//     //Function to count subarrays with sum equal to 0.
//     ll findSubarray(vector<ll> arr, int n ) {
//         //code here
//         ll count=0;
//         ll prefixSum=0;
//         ll ans=0;
//         unordered_map<ll,ll> mp;
        
//         mp[prefixSum]=1;
//         for(ll i=0;i<arr.size();i++){
//             ll currVal = arr[i];
//               prefixSum+=currVal;
           
//            if(mp.find(prefixSum)!=mp.end()){
//                ans+=mp[prefixSum];
//                mp[prefixSum]+=1;
//            }
//            else{
//                mp[prefixSum]=1;
//            }
                
//             }
        
//         return ans;
//     }
// };