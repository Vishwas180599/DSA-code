
// https://practice.geeksforgeeks.org/problems/equal-0-1-and-23208/1/
// // class Solution {
// //   public:
// //     long long getSubstringWithEqual012(string str) {
// //         // code here
        
// //     int ans=0;
// //     unordered_map<string,int> mp;
// //     int countzeros=0,countones=0,counttwos=0;
    
// //     string key = to_string(countones-countzeros)+ '#'+to_string(counttwos-countones);
// //     mp[key]=1;
    
// //     for(int i=0;i<str.size();i++){
// //         if(str[i]=='0'){
// //             countzeros+=1;
// //         }
// //         else if(str[i]=='1'){
// //             countones+=1;
// //         }
// //         else{
// //             counttwos+=1;
// //         }
// //         string currentkey= to_string(countones-countzeros)+ '#'+to_string(counttwos-countones);
        
// //         if(mp.find(currentkey)!=mp.end()){
// //            ans+=mp[currentkey];
// //            mp[currentkey]+=1;
// //         }
// //         else{
// //             mp[currentkey]=1;
// //         }
        
// //     }
// //     return ans;

// //     }
// // };