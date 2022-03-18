// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> powerSet ;
//         vector<int>currSubset;
//         generateAllSubsets(nums,0,currSubset,powerSet);
//         return powerSet;
//     }
    
// void generateAllSubsets(vector<int>nums,int currentIndex,vector<int>&currSubset,vector<vector<int>>&powerSet){
//     if(currentIndex>=nums.size()){
//         powerSet.push_back(currSubset);
//         return ;
//     }
//     int currVal=nums[currentIndex];
    
    
//     currSubset.push_back(currVal);
//     generateAllSubsets(nums,currentIndex+1,currSubset,powerSet);
    
//     currSubset.pop_back();
//      generateAllSubsets(nums,currentIndex+1,currSubset,powerSet);
    
//     return;
// }
// };