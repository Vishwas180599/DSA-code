// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int>s;
//         for(auto currentStone:asteroids){
//             if(currentStone>0)
//                 s.push(currentStone);
//             else{
//                 while(!s.empty()&&s.top()<-currentStone&& s.top()>0){
//                     s.pop();                    
//                 }
//                 if(!s.empty()&&s.top()==-currentStone)
//                     s.pop();
//                 else if(!s.empty()&&s.top()<0)
//                     s.push(currentStone);
//                else if(s.empty())
//                    s.push(currentStone);
//             }
//         }
//         vector<int>ans(s.size());
//         for(int i=s.size()-1;i>=0;i--){
//             ans[i]=s.top();
//             s.pop();
//     }
        
//         return ans;
//     }
// };