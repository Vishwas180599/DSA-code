//https://practice.geeksforgeeks.org/problems/path-in-matrix3805/1

/*class Solution{
public:
int path(int N,int curr_row ,int curr_col,vector<vector<int>>&Matrix)
{
    if(curr_row>=N || curr_col>=N || curr_col<0 || curr_row<0 ) return 0;
    // if(x<0 || y<0)
    //     return -1000001;
        if(curr_row==N-1)
        return Matrix[curr_row][curr_col];
        //if(vec[curr_row][curr_col] != -1)
        //return vec[curr_row][curr_col];
        int d = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col,Matrix);
        int dl = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col-1,Matrix);
        int dr = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col+1,Matrix);
        //return vec[curr_row][curr_col] = max(d, max(dl,dr));
        return max(d,max(dl,dr));
    }

    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int ans = 0;
        //vector<vector<int>>vec(501,vector<int>(501,-1));
        for(int i=0;i<N;i++)
        ans = max(ans,path(N,0,i,Matrix));
        return ans;
    }
};
*/
/*class Solution{
public:
int path(int N,int curr_row ,int curr_col, vector<vector<int>> &Matrix,vector<vector<int>>&vec)
{
    if(curr_row>=N || curr_col>=N || curr_col<0 || curr_row<0 ) return 0;
    // if(x<0 || y<0)
    //     return -1000001;
        if(curr_row==N-1)
        return Matrix[curr_row][curr_col];
        if(vec[curr_row][curr_col] != -1)
        return vec[curr_row][curr_col];
        int d = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col,Matrix,vec);
        int dl = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col-1,Matrix,vec);
        int dr = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col+1,Matrix,vec);
        return vec[curr_row][curr_col] = max(d, max(dl,dr));
    }

    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int ans = 0;
        vector<vector<int>>vec(501,vector<int>(501,-1));
        for(int i=0;i<N;i++)
        ans = max(ans,path(N,0,i,Matrix,vec));
        return ans;
    }
};*/
/*class Solution{
public:
int path(int N,int curr_row ,int curr_col, vector<vector<int>> &Matrix,vector<vector<int>>&vec)
{
    if(curr_row>=N || curr_col>=N || curr_col<0 || curr_row<0 ) return 0;
    // if(x<0 || y<0)
    //     return -1000001;
        if(curr_row==N-1)
        return Matrix[curr_row][curr_col];
        if(vec[curr_row][curr_col] != -1)
        return vec[curr_row][curr_col];
        int d = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col,Matrix,vec);
        int dl = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col-1,Matrix,vec);
        int dr = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col+1,Matrix,vec);
        return vec[curr_row][curr_col] = max(d, max(dl,dr));
    }

    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int ans = 0;
        vector<vector<int>>vec(N+1,vector<int>(N+1,-1));
        for(int i=0;i<N;i++)
        ans = max(ans,path(N,0,i,Matrix,vec));
        return ans;
    }
};*/
/*class Solution{
public:
int path(int N,int curr_row ,int curr_col, vector<vector<int>> &Matrix,unordered_map<string,int>& vec)
{
    if(curr_row>=N || curr_col>=N || curr_col<0 || curr_row<0 ) return 0;
    // if(x<0 || y<0)
    //     return -1000001;
        if(curr_row==N-1)
        return Matrix[curr_row][curr_col];
        string currentkey = to_string(curr_row)+','+to_string(curr_col);
        if(vec.find(currentkey)!=vec.end())
        return vec[currentkey];
        //if(vec[curr_row][curr_col] != -1)
        //return vec[curr_row][curr_col];
        int d = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col,Matrix,vec);
        int dl = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col-1,Matrix,vec);
        int dr = Matrix[curr_row][curr_col] + path(N,curr_row+1,curr_col+1,Matrix,vec);
        //return vec[curr_row][curr_col] = max(d, max(dl,dr));
    return vec[currentkey] = max(d,max(dl,dr));
    
}

    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int ans = 0;
        //vector<vector<int>>vec(N+1,vector<int>(N+1,-1));
        unordered_map<string,int> vec;
        for(int i=0;i<N;i++)
        ans = max(ans,path(N,0,i,Matrix,vec));
        return ans;
    }
};*/