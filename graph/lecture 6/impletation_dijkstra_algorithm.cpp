// // { Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// class Solution
// {
// 	public:
// 	//Function to find the shortest distance of all the vertices
//     //from the source vertex S.
//     vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//     {
//         // Code here
//         vector<int>cost(V,1001);
//         cost[S]=0;
//         vector<bool> visited(V,false);
        
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//         pq.push({0,S});//
//         while(!pq.empty()){
//             pair<int,int>p=pq.top();
//             int currentNode=p.second;
//             int currentCost=p.first;
            
//             pq.pop();
//             if(visited[currentNode]){
//                 continue;
//             }
//             visited[currentNode]=true;
//             cost[currentNode]=currentCost;
//             for(int i=0;i<adj[currentNode].size();i++)
//             {
//                 int neighbourNode = adj[currentNode][i][0];
//                 int weight = adj[currentNode][i][1];
//                 if(visited[neighbourNode])
//                     continue;
                    
//                 pq.push({currentCost + weight, neighbourNode});
//             }
//         }
//         return cost;
        
        
        
//     }
// };


// // { Driver Code Starts.


// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<vector<int>> adj[V];
//         int i=0;
//         while (i++<E) {
//             int u, v, w;
//             cin >> u >> v >> w;
//             vector<int> t1,t2;
//             t1.push_back(v);
//             t1.push_back(w);
//             adj[u].push_back(t1);
//             t2.push_back(u);
//             t2.push_back(w);
//             adj[v].push_back(t2);
//         }
//         int S;
//         cin>>S;
        
//         Solution obj;
//     	vector<int> res = obj.dijkstra(V, adj, S);
    	
//     	for(int i=0; i<V; i++)
//     	    cout<<res[i]<<" ";
//     	cout<<endl;
//     }

//     return 0;
// }

//   // } Driver Code Ends