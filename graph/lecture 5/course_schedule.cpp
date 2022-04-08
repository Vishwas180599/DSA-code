// class Solution {
// public:
//     bool canFinish(int n, vector<vector<int>>& edges) {
//         vector<vector<int>>graph = ConstructGraph(n,edges);
        
//         unordered_set<int>visited;
//         unordered_set<int>recStack;
//         vector<int>traversal;
        
//         for(int currentVertex=0;currentVertex<n;currentVertex++){
//             if(visited.find(currentVertex)!=visited.end())
//                 continue;
            
//             if(isCyclic(graph,currentVertex,visited,recStack,traversal))
//                 return false;
            
            
//         }
//         return true;

        
//     }
// private: 
//     bool isCyclic(vector<vector<int>>&graph,int currentVertex,unordered_set<int>&visited,unordered_set<int>&recStack,vector<int>&traversal){
//         visited.insert(currentVertex);
//         recStack.insert(currentVertex);
        
//         for(auto neighbour:graph[currentVertex]){
//             if(visited.find(neighbour)==visited.end()){
//                 if(isCyclic(graph,neighbour,visited,recStack,traversal))
//                     return true;
//             }
//             else if(recStack.find(neighbour)!=recStack.end())
//                 return true;
//         }
//         traversal.push_back(currentVertex);
//         recStack.erase(currentVertex);
//         return false;
//     }
// private:
//     vector<vector<int>> ConstructGraph(int n,vector<vector<int>>&edges){
//         vector<vector<int>>graph(n);
//         for(auto it:edges){
//             int v = it[0];
//             int u = it[1];
//             graph[u].push_back(v);
//         }
//         return graph;
               
//     }
    
   
// };