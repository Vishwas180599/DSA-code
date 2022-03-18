// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//         int answer = 0;
//         int prefixSum = 0;
        
//         unordered_map<int,int> mp;
//         mp[prefixSum]=1;
        
//         for(int i=0;i<nums.size();i++){
//             prefixSum +=nums[i];
//             //handle mod of -ve integer
//             prefixSum = ((prefixSum%k)+k)%k;
            
//             if(mp.find(prefixSum)!=mp.end()){
//                 answer+=mp[prefixSum];
//                 mp[prefixSum]+=1;
//             }
//             else{
//                 mp[prefixSum]=1;
//             }
            
//         }
//         return answer;
//     }
// };