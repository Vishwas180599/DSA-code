/*class Solution {
public:
    int fib(int n) {
        unordered_map<int,int> mp;
        return nthfb(n,mp);
    }
public:
    int nthfb(int n,unordered_map<int,int>& mp){
        if(n<=1){
            return n;
        }
       
        int currentkey = n;
        
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        
        int a = nthfb(n-1,mp);
        int b = nthfb(n-2,mp);
        mp[currentkey]= a+b;
        
        return mp[currentkey];
    }
};*/