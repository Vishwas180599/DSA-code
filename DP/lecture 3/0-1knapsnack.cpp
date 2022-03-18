
//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

/*class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       return maxProfit(wt,val,W,0,n);
    }
    
    public:
    
    int maxProfit(int wt[],int val[],int W,int currentItem,int n){
        if(currentItem==n){
            return 0;
        }
        int currentItemwt = wt[currentItem];
        int currentItemval = val[currentItem];
        
        int consider = 0;
        
        if(currentItemwt<=W){
            consider = currentItemval + maxProfit(wt,val,W-currentItemwt,currentItem+1,n);
        }
        int noconsider = maxProfit(wt,val,W,currentItem+1,n);
        
        return max(consider,noconsider);
    }
};
*/
/*class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       unordered_map<string,int> mp;
       return maxProfit(wt,val,W,0,n,mp);
    }
    
    public:
    
     int maxProfit(int wt[],int val[],int W,int currentItem,int n,unordered_map<string,int>& mp){
        if(currentItem>=n){
            return 0;
        }
         int currentItemwt = wt[currentItem];
         int currentItemval = val[currentItem];
        
         int consider = 0;
         
         
         //int currentkey = (W,currentItem);
         string currentkey = to_string(W)+ ','+ to_string(currentItem);
    //    /*  
    //     pair<int,int> currentkey;
    //     currentkey =make_pair(W,currentItem);
    //     */
        /*if(mp.find(currentkey)!=mp.end()){
            return mp[currentkey];
        }
        
        
        if(currentItemwt<=W){
            consider = currentItemval + maxProfit(wt,val,W-currentItemwt,currentItem+1,n,mp);
        }
         int noconsider = maxProfit(wt,val,W,currentItem+1,n,mp);
        
        mp[currentkey] = max(consider,noconsider);
        return  mp[currentkey];
    }
};;*/