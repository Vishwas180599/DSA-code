// https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1/

// class Solution{
//   public:
//     int longestKSubstr(string s, int k) {
//     // your code here
//     int answer=-1;
//     int left = 0;
//     unordered_map<char,int> mp;
//     for(int right=0;right<s.size();right++){
//         int currChar= s[right];
        
//         if(mp.find(currChar)!=mp.end()){
//             mp[currChar]+=1;
//         }
//         else
//            mp[currChar]=1;
        
//         while(left<=right && mp.size()>k){
//             int disChar = s[left];
//             mp[disChar]-=1;
//             left+=1;
            
//             if(mp[disChar]==0){
//                 mp.erase(disChar);
//             }
            
//         }
        
//         if(mp.size()==k){
//             int length = right -left + 1;
//             answer= max(answer,length);
//         }
//     }
//     return answer;
//     }
// };