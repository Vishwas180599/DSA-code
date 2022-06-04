// // class Solution {
// // public:
   
// //        	int minCostConnectPoints(vector<vector<int>>& points) {

// // 		int N = points.size();
// // 		vector<vector<pair<int, int>>> graph(N);

// // 		for (int i = 0; i < N; i++) {
// // 			for (int j = 0; j < N; j++) {
// // 				if (i == j) continue;

// // 				graph[i].push_back({abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]), j});

// // 			}
// // 		}

// // 		priority_queue<pair<int, int>, vector<pair<int, int>> , greater<pair<int, int>>> pq;
// // 		pq.push({0, 0});
// // 		vector<bool> visited(N, false);
// //         int ans = 0;

// // 		while (!pq.empty()) {
// // 			int sz = pq.size();
// // 			while (sz--) {
// // 				int u = pq.top().second;
// //                 int wt = pq.top().first; 
// //                 pq.pop();
// // 				if (visited[u]) continue;

// // 				visited[u] = true; 
                
// //                 ans += wt;
// // 				for (auto nbr : graph[u]) {
// // 					int v = nbr.second;
// // 					int costTillNbr = nbr.first;
// // 					if (!visited[v]) pq.push({costTillNbr, v});
// // 				}
// // 			}
// // 		}

// // 		return ans;
// // 	}
// // };


// class Solution {
// public:
//     int minKey(vector<bool>& inMST, vector<int>& key) {
//         int minIndex = 0;
//         int minVal   = INT_MAX;
//         for(int i = 0; i<key.size(); i++) {
//             if(!inMST[i] && key[i] < minVal) {
//                 minIndex = i;
//                 minVal   = key[i];
//             }
//         }
//         return minIndex;
//     }
//     int MST(vector<vector<int>>& graph, int V) {
//         vector<int>  key(V, INT_MAX);
//         vector<bool> inMST(V, false);
//         key[0] = 0;
        
//         for(int count = 1; count<=V-1; count++) {
//             int u    = minKey(inMST, key);
//             inMST[u] = true;
            
//             for(int v = 0; v<V; v++) {
//                 if(graph[u][v] && !inMST[v] && graph[u][v] < key[v]) {
//                     key[v] = graph[u][v];
//                 }
//             }
//         }
        
//         int cost = 0;
//         for(int i : key) {
//             cost +=i;
//         }
//         return cost;
//     }
//     int minCostConnectPoints(vector<vector<int>>& points) {
//         int n=points.size();
//         vector<vector<int>>graph(n, vector<int>(n));
//         for(int i=0;i<points.size();i++){
//             for(int j=i+1;j<points.size();j++){
//                 int currentPointX=points[i][0];
//                 int currentPointY=points[i][1];
                
//                 int neighbourPointX=points[j][0];
//                 int neighbourPointY=points[j][1];
                
//                 int weight= abs(currentPointX - neighbourPointX)+abs(currentPointY - neighbourPointY);
                
//                 graph[i][j]=weight;
//                 graph[j][i]=weight;
//             }
//         }
//         return MST(graph,points.size());
//     }

// };