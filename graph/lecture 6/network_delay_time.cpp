// class Solution {
// public:
//     int networkDelayTime(vector<vector<int>>& times, int n, int k) {
//         vector<vector<vector<int>>>graph=constructGraph(times,n);
//         return minTime(graph,n,k);
//     }
// private:
//     vector<vector<vector<int>>>constructGraph(vector<vector<int>>& edges,int n){
//         vector<vector<vector<int>>>graph(n+1);
//         for(int i=0;i<=n;i++){
//             graph.push_back({{}});
//         }
//         for(auto edge:edges){
//             int source=edge[0];
//             int destination=edge[1];
//             int cost=edge[2];
//             graph[source].push_back({destination,cost});
//         }
//         return graph;
//     }
// private:
//     int minTime(vector<vector<vector<int>>>&graph,int n,int src){
//         vector<int>cost(n+1);
//         cost[src]=0;
//         vector<bool>visited(n+1,false);
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//         pq.push({0,src});
        
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
           
//             for(int i=0;i<graph[currentNode].size();i++)
//             {
//                 int neighbourNode = graph[currentNode][i][0];
//                 int weight = graph[currentNode][i][1];
//                 if(visited[neighbourNode])
//                     continue;
                    
//                 pq.push({currentCost + weight, neighbourNode});
//             }
//         }
        
//        for(int i=1; i<=n; i++)
//             if(visited[i]==0)
//                 return -1;
//         int ans = 0;
//         for(int x:cost) {
//             ans  = max(ans,x);
//         }    
//         return ans;
        
//     }
    

// };