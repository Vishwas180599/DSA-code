// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int answer=0;
//         int left =0;
        
//         unordered_map<char,int> mp;
        
//         for(int right=0;right<s.size();right++){
//             char currChar = s[right];
//             if(mp.find(currChar)!=mp.end() && mp[currChar]>=left){
//                 left = mp[currChar]+1;              
//             }
//             int length= right-left+1;
//             mp[currChar]=right;
//             answer = max(answer,length);
//         }
//     return answer;
//     }
// };