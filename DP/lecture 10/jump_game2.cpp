/*class Solution {
public:
    int minJumps(vector<int>& nums,int curr)
    {
        if(curr>=nums.size()-1) return 0;
        //int currkey = curr;
        //if(vec[currkey]!=-1) return vec[currkey];
        int currjump = nums[curr];
        int ans = 10001;
        for(int i=1;i<=currjump;i++)
        {
            int tempans = 1+minJumps(nums,curr+i);
            ans = min(ans, tempans);
        }
        return ans;
        //return vec[currkey]=ans;
    }
    int jump(vector<int>& nums) {
       // vector<int>vec(nums.size()+1,-1);
       return minJumps(nums,0);
    }
};*/
/*class Solution {
public:
    int minJumps(vector<int>& nums,int curr,vector<int>&vec)
    {
        if(curr>=nums.size()-1) return 0;
        int currkey = curr;
        if(vec[currkey]!=-1) return vec[currkey];
        int currjump = nums[curr];
        int ans = 10001;
        for(int i=1;i<=currjump;i++)
        {
            int tempans = 1+minJumps(nums,curr+i,vec);
            ans = min(ans, tempans);
        }
        //return ans;
        return vec[currkey]=ans;
    }
    int jump(vector<int>& nums) {
       vector<int>vec(nums.size()+1,-1);
       return minJumps(nums,0,vec);
    }
};*/