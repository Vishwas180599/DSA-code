// class Solution {
// public:
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         return countAtMostS(nums,k) - countAtMostS(nums,k-1);
//     }
     
// int countAtMostS(vector<int>& str, int k) {
// 	// write your code here
//     int ans = 0,distinctCount=0,relese=0;
//     unordered_map<int,int>mp;
//     for(int acquire=0;acquire<str.size();acquire++){
//         int currChar = str[acquire];
//         if(mp.find(currChar)!=mp.end()){
//             mp[currChar]+=1;

//         }
//         else{
//             distinctCount+=1;
//             mp[currChar]=1;
//         }
//         while(relese<=acquire && distinctCount>k){
//             int disChar=str[relese];
//             mp[disChar]-=1;
//             relese+=1;

//             if(mp[disChar]==0){
//                 mp.erase(disChar);
//                 distinctCount-=1;
//             }
//         }
//         ans+=(acquire-relese+1);
//     }
//     return ans;
// }
// };