// // https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1#

// // class Solution{
// //   public:
// //     vector <int> countDistinct (int arr[], int n, int k)
// //     {
// //         //code here.
// //         unordered_map<int,int> mp;
// //         int distinctCount=0;
// //         vector<int> answer ;
// //         int currVal=0;
// //         for(int i=0;i<k-1;i++){
// //              currVal = arr[i];
            
// //             if(mp.find(currVal)!=mp.end()){
// //                 mp[currVal]+=1;
// //             }
// //             else{
// //                 mp[currVal]=1;
// //                 distinctCount+=1;
// //             }
// //         }
// //         int relese =0;
        
// //         for(int j=k-1;j<n;j++){
// //             currVal = arr[j];
            
// //             if(mp.find(currVal)!=mp.end()){
// //                 mp[currVal]+=1;
                
// //             }
// //             else{
// //                 mp[currVal]=1;
// //                 distinctCount+=1;
// //             }
// //             // if(j<k-1){
// //             //     continue;
// //             // }
// //             answer.push_back(distinctCount);
            
// //             int disValue= arr[relese];
// //             mp[disValue]-=1;
            
// //             if(mp[disValue]==0){
// //                 mp.erase(disValue);
// //                 distinctCount-=1;
// //             }
// //             relese+=1;
// //         }
// //       return answer;  
// //     }
// // };

// class Solution{
//   public:
//     vector <int> countDistinct (int arr[], int n, int k)
//     {
//         //code here.
//         unordered_map<int,int> mp;
//         int distinctCount=0;
//         vector<int> answer ;
//          int currVal=0;
      
//         int relese =0;
        
//         for(int j=0;j<n;j++){
//             currVal = arr[j];
            
//             if(mp.find(currVal)!=mp.end()){
//                 mp[currVal]+=1;
                
//             }
//             else{
//                 mp[currVal]=1;
//                 distinctCount+=1;
//             }
//             if(j<k-1){
//                 continue;
//             }
//             answer.push_back(distinctCount);
            
//             int disValue= arr[relese];
//             mp[disValue]-=1;
            
//             if(mp[disValue]==0){
//                 mp.erase(disValue);
//                 distinctCount-=1;
//             }
//             relese+=1;
//         }
//       return answer;  
//     }
// };