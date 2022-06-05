// class Solution {
// public:
//     vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
//         vector<int> graph[n];
        
        
        
//         for(auto edge:connections){
//             int u = edge[0];
//             int v= edge[1];
            
//             graph[v].push_back(u);
//             graph[u].push_back(v);
//         }
//         return findCriticalConnections(n,graph);
//     }
// private:
//     vector<vector<int>>findCriticalConnections(int n,vector<int>graph[]){
//         vector<int>disTime(n,-1);
//         vector<int>minTime(n,-1);
        
//         vector<int>Time={0};
//         vector<vector<int>>answer;
//         tarjansDFS(graph,0, -1,disTime,minTime,Time,answer);
//         return answer;
//     }
// private:
//     void tarjansDFS(vector<int>graph[],int currentVertex,int currentParent,vector<int>&disTime,vector<int>&minTime,vector<int>&Time,vector<vector<int>>&answer){
        
//         disTime[currentVertex]=Time[0];
//         minTime[currentVertex]=Time[0];
//         Time[0]+=1;
        
//         for(int neigh:graph[currentVertex]){

//                 if(neigh==currentParent)
//                     continue;
//                 if(disTime[neigh]!=-1){
//                     minTime[currentVertex ] = min(minTime[currentVertex],disTime[neigh]);
//                     continue;
//                 }
//                 tarjansDFS(graph,neigh,currentVertex,disTime,minTime,Time,answer);
//                 minTime[currentVertex]=min(minTime[currentVertex],minTime[neigh]);
                
//                 if(disTime[currentVertex]<minTime[neigh]){
//                     vector<int>temp;
//                     temp.push_back(currentVertex);
//                     temp.push_back(neigh);
//                     answer.push_back(temp);
                
//             }
//         }
//         return ;
//     }

// };


// // class Solution {
// // public:
// //     //use find the bridges in a graph approach to get all critical connections
// // 	//Tarjans Algorithm / DFS
// //     void dfs(int node, int parent, vector<int> &tin, vector<int> &low, vector<int> &vis, vector<int> graph[], vector<vector<int>> &ans, int &time)
// //     {
// //         //when we visite node first time, tin and low of the node are equal to the time
// //         tin[node]=low[node]=time++;
// //         vis[node] = 1; //mark node as visited
        
// //         for(auto it : graph[node])
// //         {
// //             if(it == parent) continue; //to avoid backtracking
            
// //             //if node is not visited, call the dfs function
// //             if(!vis[it])
// //             {
// //                 dfs(it, node, tin, low, vis, graph, ans, time);
                
// //                 //when we return, low of the node is equal to the minimum of low of its child and low of itself
// //                 low[node] = min(low[node], low[it]);
                
// //                 //when we get low of child is greater than tin of the node
// //                 //it means there is only path to cover child that's why {node, it} will be our critical connections or bridge 
// //                 if(low[it] > tin[node])
// //                     ans.push_back({node, it});
// //             }
            
// //             //if node is already visited and tin of the child is less than the low of itself
// //             //we assign tin of the child to the low of the node
// //             else
// //                 low[node] = min(low[node], tin[it]);
            
// //         }
// //     }
// //     vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) 
// //     {
// //         //tin - time of insertion at the node
// //         //low - lowest time of insertion at the node
// //         //vis - mark visited node 
// //         vector<int> tin(n, -1), low(n, -1), vis(n, 0);
// //         vector<vector<int>> ans;
// //         vector<int> graph[n]; //stores connections in the form of graph
// //         int time=0;
        
// //         for(auto it: connections)
// //         {
// //             graph[it[0]].push_back(it[1]);
// //             graph[it[1]].push_back(it[0]);
// //         }
        
// //         //call dfs function
// //         dfs(0, -1, tin, low, vis, graph, ans, time);
// //         return ans;
// //     }
// // };