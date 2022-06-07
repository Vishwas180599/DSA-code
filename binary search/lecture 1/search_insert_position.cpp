// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
      
//         int answer=-1;
//         int start=0;
//         int end = nums.size()-1;
        
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(nums[mid]==target){
//                 return mid;
//             }
                
//             else if(nums[mid]<target){
                
//                 start=mid+1;
//             }
//             else{
//                 answer=mid;            
//                 end=mid-1;
//             }
//         }
//         if(answer==-1)
//             return nums.size();
//         return answer;
//     }
// };