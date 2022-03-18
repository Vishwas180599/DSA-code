/*class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int,int> mp;
        return nthtrib(n,mp);
    }
public:
    int nthtrib(int n,unordered_map<int,int>& mp){
        if(n<=1){
            return n;
        }
        if(n==2){
            return 1;
        }
        int currentkey = n;
        
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        
        int a = nthtrib(n-1,mp);
        int b = nthtrib(n-2,mp);
        int c= nthtrib(n-3,mp);
       mp[currentkey]= a+b+c;
        
        return a+b+c;
       // return mp[currentkey];
    }
};*/