// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends


// class Solution
// {
//     public:
//     //Function to calculate the span of stockâ€™s price for all n days.
//     vector <int> calculateSpan(int price[], int n)
//     {
//        // Your code here
//        vector<int >ans(n);
//       stack<int>s;
      
//       for(int i=0;i<n;i++){
//           int currentPrice = price[i];
          
//           while(!s.empty()&&price[s.top()]<=currentPrice){
//               s.pop();
//           }
//           ans[i]=s.empty()? i+1 : i-s.top();
//           s.push(i);
//       }
//       return ans;
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
// 		int i,a[n];
// 		for(i=0;i<n;i++)
// 		{
// 			cin>>a[i];
// 		}
// 		Solution obj;
// 		vector <int> s = obj.calculateSpan(a, n);
		
// 		for(i=0;i<n;i++)
// 		{
// 			cout<<s[i]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }
//   // } Driver Code Ends