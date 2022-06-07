// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int>result={-1,-1};
//         result[0]=findFirstPos(nums,target);
//         if(result[0]==-1)
//             return result;
//         result[1]=findLastPos(nums,target);
        
//         return result;
//     }
// private:
//     int findFirstPos(vector<int>&nums,int target){
//         int answer=-1;
//         int start=0;
//         int end = nums.size()-1;
        
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(nums[mid]==target){
//                 answer=mid;
//                 end=mid-1;
//             }
                
//             else if(nums[mid]<target)
//                 start=mid+1;
//             else
//                 end=mid-1;
//         }
//         return answer;
//     }
//     int findLastPos(vector<int>&nums,int target){
//         int answer=-1;
//         int start=0;
//         int end = nums.size()-1;
        
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(nums[mid]==target){
//                 answer=mid;
//                 start=mid+1;
//             }
                
//             else if(nums[mid]<target)
//                 start=mid+1;
//             else
//                 end=mid-1;
//         }
//         return answer;
//     }
// };