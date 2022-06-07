// // { Driver Code Starts
// // Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends
// //User function template in C++

// class Solution 
// {
//     public:
//     //Function to find minimum number of pages.
//     int findPages(int A[], int N, int M) 
//     {
//         //code here
//         long totalSum=0;
//         for(int i=0;i<N;i++)
//            totalSum+=A[i];
           
//         int start=0;
//         int end = totalSum;
        
//         int ans=-1;
//         while(start<=end){
//             int mid = start + (end-start)/2;
            
//             if(isPossible(A,N,M,mid)){
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
//     int studentCount=1;
//     int currentSum=0;
    
//     for(int i=0;i<n;i++){
//         int currentPages=A[i];
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

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int A[n];
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//         }
//         int m;
//         cin>>m;
//         Solution ob;
//         cout << ob.findPages(A, n, m) << endl;
//     }
//     return 0;
// }
//   // } Driver Code Ends