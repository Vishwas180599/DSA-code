// // { Driver Code Starts

// #include<bits/stdc++.h>

// using namespace std;


//  // } Driver Code Ends
// //User function template for C++
// class Solution{
// public:	
// 	/* if x is present in arr[] then returns the count
// 		of occurrences of x, otherwise returns 0. */
// 	int count(int arr[], int n, int x) {
// 	    // code here
// 	    int firstPos = findFirstPos(arr,n,x);
// 	    if(firstPos==-1)   return 0;
	    
// 	    int lastPos=findLastPos(arr,n,x);
// 	    return (lastPos - firstPos)+1;
// 	}
// 	private:
//     int findFirstPos(int nums[],int n,int target){
//         int answer=-1;
//         int start=0;
//         int end = n-1;
        
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(nums[mid]==target){
//                 answer=mid;
//                 end=mid-1;
//             }
                
//             else if(nums[mid]<target)
//                 start=mid+1;
//             else
//                 end=mid-1;
//         }
//         return answer;
//     }
//     int findLastPos(int nums[],int n,int target){
//         int answer=-1;
//         int start=0;
//         int end = n-1;
        
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(nums[mid]==target){
//                 answer=mid;
//                 start=mid+1;
//             }
                
//             else if(nums[mid]<target)
//                 start=mid+1;
//             else
//                 end=mid-1;
//         }
//         return answer;
//     }
// };

// // { Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, x;
//         cin >> n >> x;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         Solution ob;
//         auto ans = ob.count(arr, n, x);
//         cout << ans << "\n";
//     }
//     return 0;
// }
//   // } Driver Code Ends