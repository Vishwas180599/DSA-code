/*class Solution {
public:
    int rob(vector<int>& nums) {
        return maxMoney(nums,0);
        
    }
    
public:
    int maxMoney(vector<int> nums,int currentIndex){
        if(currentIndex>=nums.size()){
            return 0;
        }
    
     int rob = nums[currentIndex] + maxMoney(nums,currentIndex+2);
     int norob = maxMoney(nums,currentIndex+1);
        
    return max(rob,norob);
    }
};*/
/*class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int,int> mp;
        return maxMoney(nums,0,mp);
        
    }
    
public:
    int maxMoney(vector<int> nums,int currentIndex,unordered_map<int,int>& mp){
        if(currentIndex>=nums.size()){
            return 0;
        }
     int currentkey =currentIndex;
        
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
     int rob = nums[currentIndex] + maxMoney(nums,currentIndex+2,mp);
     int norob = maxMoney(nums,currentIndex+1,mp);
        
        mp[currentkey] = max(rob,norob);
    return max(rob,norob);
    }
};*/