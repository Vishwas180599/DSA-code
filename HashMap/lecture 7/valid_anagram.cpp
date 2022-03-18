// class Solution {
// public:
//     bool isAnagram(string s, string t) {
 
        
//         unordered_map<char,int> mp;
//         for(int i=0;i<s.size();i++){
//              char currChar = s[i];
            
//             if(mp.find(currChar)!=mp.end()){
//                 mp[currChar]+=1;
//             }
//             else{
//                 mp[currChar]=1;
//             }
//         }
        
//         for(int i=0;i<t.size();i++){
//             char currChar=t[i];
            
//             if(mp.find(currChar)==mp.end()){
//                 return false;
//             }
//             mp[currChar]-=1;
            
//             if(mp[currChar]==0){
//                 mp.erase(currChar);
//             }
//         }
//         if( mp.size()==0)
//             return true;
//         else
//             return false;
        
//     }
// };