// //DFS
// // // { Driver Code Starts
// // #include <bits/stdc++.h>
// // using namespace std;

// //  // } Driver Code Ends
// // class Solution {
// //   public:
// //     // Function to detect cycle in a directed graph.
// //      bool checkIsCyclic(int curr_ver,unordered_set<int>&visited,unordered_set<int>&recStack,vector<int>adj[])
// //     {
        
                
// //          visited.insert(curr_ver);
// //          recStack.insert(curr_ver);
        
// //         for(int neighbour: adj[curr_ver]){
// //             if(visited.find(neighbour)==visited.end()){
// //                 if((checkIsCyclic(neighbour,visited,recStack,adj))==true){
// //                     return true;
// //                 }
// //             }
// //             else if(recStack.find(neighbour)!=recStack.end()){
// //                 return true;
// //             }
// //         }
// //         recStack.erase(curr_ver);
// //         return false;
// //     }
// //     bool isCyclic(int V, vector<int> adj[]) {
// //         // code here
// //          unordered_set<int> visited;
// //          unordered_set<int> recStack;
    
// //     for(int curr_ver = 0;curr_ver<V;curr_ver++){
       
// //         if(visited.find(curr_ver)!=visited.end()){
// //             continue;
// //         }
// //         if((checkIsCyclic(curr_ver,visited,recStack,adj))==true){
// //            return true;
// //     }
        
// //     }
// //     return false;
// //     }
    
   
// // };

// // // { Driver Code Starts.

// // int main() {

// //     int t;
// //     cin >> t;
// //     while (t--) {
// //         int V, E;
// //         cin >> V >> E;

// //         vector<int> adj[V];

// //         for (int i = 0; i < E; i++) {
// //             int u, v;
// //             cin >> u >> v;
// //             adj[u].push_back(v);
// //         }

// //         Solution obj;
// //         cout << obj.isCyclic(V, adj) << "\n";
// //     }

// //     return 0;
// // }
// //   // } Driver Code Ends


// //BFS
// // { Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// class Solution {
//   public:
//     // Function to detect cycle in a directed graph.
//     bool isCyclic(int V, vector<int> adj[]) {
//         // code here
//         vector<int>Indegree(V,0);
//         for (int i = 0; i <V; i++)
//       {
//         for(int it : adj[i]){
//           Indegree[it]++;
//       }
//       }
//       queue<int>q;
//       int ans=0;
//       unordered_set<int>visited;
//       for(int i=0;i<V;i++){
//           if(Indegree[i]==0){
//               q.push(i);
//               ans+=1;
//           }
//       }
//           while(!q.empty()){
//               int currentVertex = q.front();
//               q.pop();
              
//               if(visited.find(currentVertex)!=visited.end()){
//                   continue;
//               }
//               visited.insert(currentVertex);
              
//               for(auto neighbour: adj[currentVertex]){
//                   Indegree[neighbour]-=1;
                  
//                   if(Indegree[neighbour]==0){
//                       q.push(neighbour);
//                       ans+=1;
//                   }
//               }
//           }
//           if(ans==V)return false;
//         else return true;
//       }
    
// };

// // { Driver Code Starts.

// int main() {

//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;

//         vector<int> adj[V];

//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }

//         Solution obj;
//         cout << obj.isCyclic(V, adj) << "\n";
//     }

//     return 0;
// }
//   // } Driver Code Ends