// https://practice.geeksforgeeks.org/problems/ceil-the-floor2802/1#

// // { Driver Code Starts

// #include <bits/stdc++.h>

// using namespace std;

// pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
//         auto ans = getFloorAndCeil(arr, n, x);
//         cout << ans.first << " " << ans.second << "\n";
//     }
//     return 0;
// }
// // } Driver Code Ends

// int findFloor( int arr[], int n, int x) {
    
//     //Your code here
//      int answer=-1;
//         int start=0;
//         int end = n-1;
        
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(arr[mid]==x){
//                 return arr[mid];
//             }
                
//             else if(arr[mid]<x){
//                 answer=arr[mid];
//                 start=mid+1;
//             }
//             else if(arr[mid]>x)
//                 end=mid-1;
//         }
//         return answer;
//     }
// int findCeil( int arr[], int n, int x) {
    
//     //Your code here
//      int answer=-1;
//         int start=0;
//         int end = n-1;
        
//         while(start<=end){
//             int mid = start + (end - start)/2;
//             if(arr[mid]==x){
//                 return arr[mid];
//             }
                
//             else if(arr[mid]<x)
                
//                 start=mid+1;
            
//             else if(arr[mid]>x){
//                 answer=arr[mid];
//                 end=mid-1;
//         }
//         }
//         return answer;
//     }
// pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
//     // code here
//     pair<int,int>ans;
//     sort(arr,arr+n);
//     int p1=findFloor(arr,n,x);
//     int p2=findCeil(arr,n,x);
//     ans.first=p1;
//     ans.second=p2;
//     return ans;
// }
