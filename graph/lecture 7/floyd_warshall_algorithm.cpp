// // { Driver Code Starts
// //Initial template for C++

// #include<bits/stdc++.h>
// using namespace std;

//  // } Driver Code Ends
// //User function template for C++

// class Solution {
//   public:
// 	void shortest_distance(vector<vector<int>>&matrix){
// 	    // Code here
// 	    int V=matrix.size();
// 	    vector<vector<int>>cost(matrix.size(),vector<int>(matrix.size()));
	    
// 	    for(int i=0;i<V;i++){
// 	        for(int j=0;j<V;j++){
// 	            cost[i][j]=matrix[i][j];
// 	        }
// 	    }
// 	    for(int k=0;k<V;k++){
// 	        for(int i=0;i<V;i++){
// 	            for(int j=0;j<V;j++){
// 	                if(cost[i][k]!=-1 && cost[k][j]!=-1){
// 	                    if(cost[i][j]==-1)
// 	                       cost[i][j] = cost[i][k]+cost[k][j];
// 	                     else
// 	                        cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
// 	            }
// 	           }
// 	        }
// 	    }
// 	    for(int i=0;i<V;i++){
// 	        for(int j=0;j<V;j++){
// 	            matrix[i][j]=cost[i][j];
// 	        }
// 	    }
// 	    return;
// 	}
// };

// // { Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		vector<vector<int>>matrix(n, vector<int>(n, -1));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < n; j++){
// 				cin >> matrix[i][j];
// 			}
// 		}
// 		Solution obj;
// 		obj.shortest_distance(matrix);
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < n; j++){
// 				cout << matrix[i][j] << " ";
// 			}
// 			cout << "\n";
// 		}
// 	}
// 	return 0;
// }  // } Driver Code Ends