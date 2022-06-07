// // The API isBadVersion is defined for you.
// // bool isBadVersion(int version);

// class Solution {
// public:
//     int firstBadVersion(int n) {
        
//         int start=0;
//         int end=n;
        
//         int answer=0;
//         while(start<=end){
//             int mid =start + (end-start)/2;
//             if(isBadVersion(mid)){
//                 answer=mid;
//                 end=mid-1;
//             }
//             else
//                 start=mid+1;
//         }
//         return answer;
//     }
// };