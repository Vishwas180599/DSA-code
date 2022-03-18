// class Solution {
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>>answer;
//         vector<int> currAns;
//         generateTotalWays(candidates,0,target,currAns,answer);
//         return answer;
        
//     }
//    void  generateTotalWays(vector<int>&candidates,int currentIndex,int target,vector<int>&currAns,vector<vector<int>>&answer){
//        if(target==0){
//            answer.push_back(currAns);
//            return;
//        }
//        if(currentIndex>=candidates.size())
//            return;
       
//        int currVal= candidates[currentIndex];
//        if(target>=currVal){
//            currAns.push_back(currVal);
//            generateTotalWays(candidates,currentIndex,target-currVal,currAns,answer);
//            currAns.pop_back();
//        }
//         generateTotalWays(candidates,currentIndex+1,target,currAns,answer);
//        return;
//    }
// };