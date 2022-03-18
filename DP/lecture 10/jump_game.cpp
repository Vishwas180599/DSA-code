/*class Solution {
public:
    bool canJump(vector<int>& nums) {
        return isPossible(nums,0);
        
    }
public:
    bool isPossible(vector<int>& nums,int currentIndex){
        if(currentIndex>=nums.size()-1){
            return true;
        }
        int currentJump = nums[currentIndex];
        
        bool ans = false;
        
        for(int i=1;i<=currentJump;i++){
            bool tempAns = isPossible(nums,currentIndex+i);
            ans = ans||tempAns;
        }
        return ans;
        
        
        
    }

};*/
/*class Solution {
public:
    bool canJump(vector<int>& nums) {
        unordered_map<int,bool> mp;
        return isPossible(nums,0,mp);
        
    }
public:
    bool isPossible(vector<int>& nums,int currentIndex,unordered_map<int,bool>& mp){
        if(currentIndex>=nums.size()-1){
            return true;
        }
        int currentJump = nums[currentIndex];
        int currentkey = currentIndex;
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        bool ans = false;
        
        for(int i=1;i<=currentJump;i++){
            bool tempAns = isPossible(nums,currentIndex+i,mp);
            ans = ans||tempAns;
           
        }
        return  mp[currentkey]=ans;
        
        
        
    }

};*/
/*class Solution {
public:
    bool canJump(vector<int>& nums) {
       vector<int>mp(nums.size()+1,-1);
        return isPossible(nums,0,mp);
        
    }
public:
    bool isPossible(vector<int>& nums,int currentIndex,vector<int>& mp){
        if(currentIndex>=nums.size()-1){
            return true;
        }
        int currentJump = nums[currentIndex];
        int currentkey = currentIndex;
        if(mp[currentkey]!=-1){
            return mp[currentkey];
        }
        bool ans = false;
        
        for(int i=1;i<=currentJump;i++){
            bool tempAns = isPossible(nums,currentIndex+i,mp);
            ans = ans||tempAns;
           
        }
        return  mp[currentkey]=ans;
        
        
        
    }

};*/