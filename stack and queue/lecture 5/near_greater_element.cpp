// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends
// class Solution
// {
//     public:
//     //Function to find the next greater element for each element of the array.
//     vector<long long> nextLargerElement(vector<long long> arr, int n){
//         // Your code here
//         vector<long long>nge(n);
//         stack<long>s;
//         for(int i=arr.size()-1;i>=0;i--){
//             long currVal = arr[i];
            
//             while(!s.empty()&&s.top()<currVal){
//                 s.pop();
//             }
//             nge[i]=s.empty()?-1:s.top();
//             s.push(currVal);
//         }
//         return nge;
//     }
// };

// // { Driver Code Starts.

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
        
//         int n;
//         cin>>n;
//         vector<long long> arr(n);
//         for(int i=0;i<n;i++)
//             cin>>arr[i];
        
//         Solution obj;
//         vector <long long> res = obj.nextLargerElement(arr, n);
//         for (long long i : res) cout << i << " ";
//         cout<<endl;
//     }
// 	return 0;
// }  // } Driver Code Ends