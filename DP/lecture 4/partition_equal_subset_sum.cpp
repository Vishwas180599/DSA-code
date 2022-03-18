/*class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int x,total=0;
        unordered_map<string,int> mp;
        for(auto num: nums){
            total+=num;
        }
        if((total)%2!=0){
            return false;
        }
        return isPossible(nums,0,(total)/2,mp);
        
    }
  
 public:
        bool isPossible(vector<int> nums,int currentIndex,int targetSum,unordered_map<string,int>& mp){
            if(targetSum == 0){
                return true;
            }
            if (currentIndex>=nums.size()){
                return false;
            }
            
            string currentkey = to_string(currentIndex)+" "+ to_string(targetSum);
            if(mp.find(currentkey)!=mp.end()){
                return mp[currentkey];
            }
            bool consider = false;
            
            if(nums[currentIndex]<=targetSum){
                consider = isPossible(nums,currentIndex+1,targetSum-nums[currentIndex],mp);
            }
            if(consider){
                mp[currentkey]=true;
                return true;
            }
            bool notConsider = isPossible(nums,currentIndex+1,targetSum,mp);
            mp[currentkey] = (consider || notConsider);
            return mp[currentkey];
        }                  
                          
};*/