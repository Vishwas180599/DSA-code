// class Solution {
// public:
//     bool isBipartite(vector<vector<int>>& graph) {
//         int n=graph.size();
//         vector<int>colors(n,-1);
        
//         for(int currentvertex=0;currentvertex<n;currentvertex++){
//             if(colors[currentvertex]!=-1)
//                 continue;
//             if(hasEvenLengthCycle(graph,currentvertex,0,colors)==false)
//                 return false;
//         }
//         return true;
//     }
// private:
//     bool hasEvenLengthCycle(vector<vector<int>>&graph,int currentvertex,int color,vector<int>&colors){
//         if(colors[currentvertex]!=-1)
//             return colors[currentvertex]==color;
        
//         colors[currentvertex]=color;
        
//         for(auto neigh:graph[currentvertex]){
//             if(hasEvenLengthCycle(graph,neigh,1-color,colors)==false)
//                 // 1- color will handle both changing colors 0 to 1 and 1 to 0
//                 return false;
//         }
//         return true;
//     }
// };