// class Solution{
// public:	
// 	int longSubarrWthSumDivByK(int arr[], int n, int k)
// 	{
// 	    // Complete the function
// 	     int answer = 0;
//         int prefixSum = 0;
//         int length = 0;
//         unordered_map<int,int> mp;
//         mp[prefixSum]=-1;
        
//         for(int i=0;i<n;i++){
//             prefixSum +=arr[i];
//             //handle mod of -ve integer
//             prefixSum = ((prefixSum%k)+k)%k;
            
//             if(mp.find(prefixSum)!=mp.end()){
//                int prevIndex = mp[prefixSum];
//                length  =i-prevIndex;
//                answer = max(answer,length);
//             }
//             else{
//                 mp[prefixSum]=i;
//             }
            
//         }
//         return answer;
//     }
// };