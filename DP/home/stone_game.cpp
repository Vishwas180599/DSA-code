// // class Solution {
// // public:
// //     int findWinner(vector<int>&piles,int leftInd,int rightInd,bool isAliceturn){
// //         if(leftInd>rightInd)
// //             return 0;
       
        
// //         if (isAliceturn){
// //             int a=  piles[leftInd]+ findWinner(piles,leftInd+1,rightInd,false);
// //             int b = piles[rightInd]+ findWinner(piles,leftInd,rightInd-1,false);
           
// //             return max(a,b);
// //         }
// //         else{
// //             int a= -piles[leftInd]+findWinner(piles,leftInd+1,rightInd,true);
// //             int b = -piles[rightInd]+ findWinner(piles,leftInd,rightInd-1,true);
            
// //             return  min(a,b);
// //         }
       
// //     }
// // public:
// //     bool stoneGame(vector<int>& piles) {
       
// //         if(piles.size()==0)
// //             return true;
// //         int answer = findWinner(piles,0,piles.size()-1,true);
// //         if(answer>0)
// //             return true;
// //         else
// //             return false;
// //     }

// // };

// class Solution {
// public:
//     int findWinner(vector<int>&piles,int leftInd,int rightInd,bool isAliceturn,  unordered_map<string,int>& mp){
//         if(leftInd>rightInd)
//             return 0;
//         string currentkey = to_string(leftInd)+','+to_string(rightInd)+','+to_string(isAliceturn);
//         if(mp.find(currentkey)!=mp.end()){
//             return mp[currentkey];
//         }
        
//         if (isAliceturn){
//             int a=  piles[leftInd]+ findWinner(piles,leftInd+1,rightInd,false,mp);
//             int b = piles[rightInd]+ findWinner(piles,leftInd,rightInd-1,false,mp);
//             mp[currentkey]=max(a,b);
//             return max(a,b);
//         }
//         else{
//             int a= -piles[leftInd]+findWinner(piles,leftInd+1,rightInd,true,mp);
//             int b = -piles[rightInd]+ findWinner(piles,leftInd,rightInd-1,true,mp);
            
//             return mp[currentkey]= min(a,b);
//         }
//          return mp[currentkey];
//     }
// public:
//     bool stoneGame(vector<int>& piles) {
//         unordered_map<string,int> mp;
//         if(piles.size()==0)
//             return true;
//         int answer = findWinner(piles,0,piles.size()-1,true,mp);
//         if(answer>0)
//             return true;
//         else
//             return false;
//     }

// };