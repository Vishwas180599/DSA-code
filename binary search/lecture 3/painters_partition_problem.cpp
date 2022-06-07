// // { Driver Code Starts
// // driver code

// #include <bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends
// //User function template for C++

// class Solution
// {
//   public:
//     long long minTime(int arr[], int n, int k)
//     { //code here
//         long long totalSum=0;
//         for(long i=0;i<n;i++)
//            totalSum+=arr[i];
           
//         long long start=0;
//         long long end = totalSum;
        
//         int ans=-1;
//         while(start<=end){
//             long long mid = start + (end-start)/2;
            
//             if(isPossible(arr,n,k,mid)){
//                 ans=mid;
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//         }
//         return ans;
//     }
// private:
// bool isPossible(int A[],int n,int m,int boundVal){
//     long long studentCount=1;
//     long long currentSum=0;
    
//     for(long i=0;i<n;i++){
//         long long currentPages=A[i];
//         if(currentPages>boundVal)
//            return false;
//         if(currentPages+currentSum<=boundVal)
//            currentSum+=currentPages;
//         else{
//             studentCount+=1;
//             currentSum=currentPages;
            
//             if(studentCount>m)
//                return false;
//         }
//     }
//     return true;
// }
// };
// // { Driver Code Starts.

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		int k,n;
// 		cin>>k>>n;
		
// 		int arr[n];
// 		for(int i=0;i<n;i++)
// 		    cin>>arr[i];
// 		Solution obj;
// 		cout << obj.minTime(arr, n, k) << endl;
// 	}
// 	return 0;
// }  // } Driver Code Ends