
// int largestSubarray(vector<int>&nums)
// {
//     int ans=0;
//     unordered_map<string,int> mp;
//     int countzeros=0,countones=0,counttwos=0;
    
//     string key = to_string(countones-countzeros)+ '#'+to_string(counttwos-countones);
//     mp[key]=-1;
    
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==0){
//             countzeros+=1;
//         }
//         else if(nums[i]==1){
//             countones+=1;
//         }
//         else{
//             counttwos+=1;
//         }
//         string currentkey= to_string(countones-countzeros)+ '#'+to_string(counttwos-countones);
        
//         if(mp.find(currentkey)!=mp.end()){
//             int prevIndex = mp[currentkey];
//             int length = i- prevIndex;
//             ans = max(ans,length);
//         }
//         else{
//             mp[currentkey]=i;
//         }
        
//     }
//     return ans;
// }
