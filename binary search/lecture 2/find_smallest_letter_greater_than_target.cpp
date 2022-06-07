// class Solution {
// public:
//     char nextGreatestLetter(vector<char>& letters, char target) {
        
//         int start=0;
//         int end = letters.size()-1;
       
       
//         while(start<=end){
//             int mid = start + (end-start)/2;
            
//              if(letters[mid]==target) {
//                 if(mid==letters.size()-1) {
//                     return letters[0];
//                 }
//                 if(letters[mid+1]==target){
//                     start = mid+1; //to handle duplicate situation
//                     continue;
//                 }
//                 return letters[mid+1];
//             }
//             else if(letters[mid]<target)
//                  start= mid+1;
//             else
//                 end = mid-1;
//         }
        
//         if(end==letters.size()-1)
//             return letters[0];
        
//         return letters[end+1];
//     }
// };