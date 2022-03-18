/*class Solution {
public:
    int uniquePaths(int m, int n) {
        
        return numberofways(m,n,0,0);
        
        
    }
    
public:
    int numberofways(int m,int n,int curr_col,int curr_row){
        if(curr_col==m-1 && curr_row==n-1){
            return 1;
        }
        if(curr_col>=m||curr_row>=n){
            return 0;
        }
        
        int right = numberofways(m,n,curr_col,curr_row+1);
        int down = numberofways(m,n,curr_col+1,curr_row);
        
        return right+down;
    }
        
};*/

/*class Solution {
public:
    int uniquePaths(int m, int n) {
        unordered_map<string,int> mp;
        return numberofways(m,n,0,0,mp);
        
        
    }
    
public:
    int numberofways(int m,int n,int curr_col,int curr_row,unordered_map<string,int>&mp){
        if(curr_col==m-1 && curr_row==n-1){
            return 1;
        }
        if(curr_col>=m||curr_row>=n){
            return 0;
        }
        
        string currentkey = to_string(curr_row)+","+ to_string(curr_col);
        
        if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        
        int right = numberofways(m,n,curr_col,curr_row+1,mp);
        int down = numberofways(m,n,curr_col+1,curr_row,mp);
        
        return mp[currentkey] = right+down;
    }
        
};*/