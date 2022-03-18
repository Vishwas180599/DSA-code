// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//          int i,sum=0;
//         unordered_map<int,int> map;
//         vector<int> ans;
//         for(i=0;i<nums.size();i++)
//         {
//             int key=target-nums[i];
//             if(map.find(key)!=map.end())
//             {
//                 ans.push_back(i);
//                 ans.push_back(map.find(key)->second);
//                 return ans;
//             }
//             map.insert({nums[i],i});
//         }  
//         return ans;
//     }
// };