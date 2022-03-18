// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//        int answer=0,prefixSum=0;
//         unordered_map<int,int> mp;
        
//         mp[prefixSum]=1;
//         for(int i=0;i<nums.size();i++){
//             prefixSum+=nums[i];
//             if(mp.find(prefixSum-k)!=mp.end()){
//                 answer+=mp[prefixSum-k];                
//             }
//             if(mp.find(prefixSum)!=mp.end()){
//                 mp[prefixSum]+=1;
//             }
//             else{
//                 mp[prefixSum]=1;
//             }
//         }
//         return answer;
//     }
// };