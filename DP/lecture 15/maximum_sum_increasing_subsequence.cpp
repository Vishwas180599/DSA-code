// // { Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// class Solution{
		

// 	public:
// 	int maxSumIS(int arr[], int n)  
// 	{  
// 	    // Your code goes here
// 	    int answer=0;
// 	    vector<int>dp(n);
	    
// 	    for(int i=0;i<n;i++){
	        
// 	        dp[i]=arr[i];
// 	        answer = max(dp[i],answer);
// 	    }
// 	    for(int i=1;i<n;i++){
// 	        for(int j=0;j<i;j++){
// 	            if(arr[i]>arr[j]){
// 	                dp[i]=max(dp[i],arr[i]+dp[j]);
// 	                answer=max(dp[i],answer);
// 	            }
// 	        }
// 	    }
// 	    return answer;
// 	}  
// };

// // { Driver Code Starts.
// int main() 
// {
   	
   
//    	int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int a[n];

//         for(int i = 0; i < n; i++)
//         	cin >> a[i];

      

// 	    Solution ob;
// 	    cout << ob.maxSumIS(a, n) << "\n";
	     
//     }
//     return 0;
// }

//   // } Driver Code Ends