// // { Driver Code Starts
// //Initial Template for C++

// #include <bits/stdc++.h> 
// using namespace std; 


//  // } Driver Code Ends
// //User function Template for C++

// class Solution{
    
//     public:
//     vector<int> help_classmate(vector<int> arr, int n) 
//     { 
//         // Your code goes here
//         vector<int>nse(n);
//         stack<int>s;
        
//         for(int i=n-1;i>=0;i--){
//             int currVal=arr[i];
            
//             while(!s.empty()&&s.top()>=currVal)
//                s.pop();
            
//             nse[i]=s.empty()?-1:s.top();
//             s.push(currVal);
//         }
//         return nse;
        
//     } 
// };

// // { Driver Code Starts.

// int main() 
// { 
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		vector<int> array(n);
// 		for (int i = 0; i < n; ++i)
// 		{
// 			cin>>array[i];
// 		}
// 		Solution obj;
// 		vector<int> result = obj.help_classmate(array,n);
// 		for (int i = 0; i < n; ++i)
// 		{
// 			cout<<result[i]<<" ";
// 		}
// 		cout<<"\n";
// 	}
// 	return 0; 
// }

//   // } Driver Code Ends