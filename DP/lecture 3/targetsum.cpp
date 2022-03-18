/*class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>,int> mp;
        return totalWays(nums,0,target,mp);
        
    }
public:
    int totalWays(vector<int> nums,int currentIndex,int target,map<pair<int,int>,int>& mp){
        if(currentIndex >= nums.size() && target!=0){
            return 0;
        }
        if(currentIndex>=nums.size()&& target == 0){
            return 1;
        }
        pair<int,int> currentkey;
        currentkey = {currentIndex,target};
        //string c =to_string(currentIndex)+ ","+ to_string(target);
        //int currentkey= stoi(c);
        //int currentkey = (currentIndex,target);
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        int posSign = totalWays(nums,currentIndex+1,target-nums[currentIndex],mp);
        int negSign = totalWays(nums,currentIndex+1,target + nums[currentIndex],mp);
        mp[currentkey] = posSign + negSign;
        return posSign + negSign;
    }
};*/
/*class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>,int> mp;
        return totalWays(nums,0,target,mp);
        
    }
public:
    int totalWays(vector<int> nums,int currentIndex,int target,map<pair<int,int>,int>& mp){
        if(currentIndex >= nums.size() && target!=0){
            return 0;
        }
        if(currentIndex>=nums.size()&& target == 0){
            return 1;
        }
        pair<int,int> currentkey;
        currentkey = {currentIndex,target};
        //string c =to_string(currentIndex)+ ","+ to_string(target);
        //int currentkey= stoi(c);
        //int currentkey = (currentIndex,target);
        auto it = mp.find(currentkey);
        if(it != mp.end()){
            return it->second;
        }
        
        //if(mp.find(currentkey)!=mp.end()){
        //     return mp[currentkey];
        //}
        int posSign = totalWays(nums,currentIndex+1,target-nums[currentIndex],mp);
        int negSign = totalWays(nums,currentIndex+1,target + nums[currentIndex],mp);
        mp[currentkey] = posSign + negSign;
        return posSign + negSign;
    }
};*/
/*class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string,int> mp;
        return totalWays(nums,0,target,mp);
        
    }
public:
    int totalWays(vector<int> nums,int currentIndex,int target,unordered_map<string,int>& mp){
        if(currentIndex >= nums.size() && target!=0){
            return 0;
        }
        if(currentIndex>=nums.size()&& target == 0){
            return 1;
        }
       // pair<int,int> currentkey;
        //currentkey = {currentIndex,target};
        string currentkey =to_string(currentIndex)+ ','+ to_string(target);
        //int currentkey= stoi(c);
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        int posSign = totalWays(nums,currentIndex+1,target-nums[currentIndex],mp);
        int negSign = totalWays(nums,currentIndex+1,target + nums[currentIndex],mp);
        mp[currentkey] = posSign + negSign;
        return posSign + negSign;
    }
};*/