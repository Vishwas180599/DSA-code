// // class Solution {
// // public:
// //     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
// //         if(image[sr][sc]==newColor)
// //             return image;
// //         int m=image.size() ;
// //         int n=image[0].size();
// //         sinkGraph(image,sr,sc,image[sr][sc],m,n,newColor);
// //         return image;
// //     }
    
// // void sinkGraph(vector<vector<int>>&image,int currentRow,int currentCol,int color,int m,int n,int newColor)
// // {

// //     if(currentRow<0||currentRow>=m||currentCol<0||currentCol>=n||image[currentRow][currentCol]!=color)
// //         return;
// //     image[currentRow][currentCol]=newColor;
    
// //     //up move
// //     sinkGraph(image,currentRow-1,currentCol,color,m,n,newColor);
    
// //     //right move
// //      sinkGraph(image,currentRow,currentCol+1,color,m,n,newColor);
    
// //     //down move
// //      sinkGraph(image,currentRow+1,currentCol,color,m,n,newColor);
    
// //     //left move
// //      sinkGraph(image,currentRow,currentCol-1,color,m,n,newColor);
    
// //     return;
    

// // }
// // };

// //BFS
// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
//         if(image[sr][sc]==newColor)
//             return image;
//         int m=image.size() ;
//         int n=image[0].size();
//         int color = image[sr][sc];
        
//         queue<pair<int,int>>q;
//         q.push({sr,sc});
        
//         while(!q.empty()){
//             auto currentPair  = q.front();
//             q.pop();
//             int currentRow = currentPair.first;
//             int currentCol  = currentPair.second;
            
//             if(currentRow<0||currentRow>=m||currentCol<0||currentCol>=n||image[currentRow][currentCol]!=color)
//                 continue;
            
//             image[currentRow][currentCol]=newColor;
            
//             q.push({currentRow+1,currentCol});
//             q.push({currentRow-1,currentCol});
//             q.push({currentRow,currentCol+1});
//             q.push({currentRow,currentCol-1});
            
            
            
//         }
//         //sinkGraph(image,sr,sc,image[sr][sc],m,n,newColor);
        
//         return image;
//     }
    
// // void sinkGraph(vector<vector<int>>&image,int currentRow,int currentCol,int color,int m,int n,int newColor)
// // {

// //     if(currentRow<0||currentRow>=m||currentCol<0||currentCol>=n||image[currentRow][currentCol]!=color)
// //         return;
// //     image[currentRow][currentCol]=newColor;
    
// //     //up move
// //     sinkGraph(image,currentRow-1,currentCol,color,m,n,newColor);
    
// //     //right move
// //      sinkGraph(image,currentRow,currentCol+1,color,m,n,newColor);
    
// //     //down move
// //      sinkGraph(image,currentRow+1,currentCol,color,m,n,newColor);
    
// //     //left move
// //      sinkGraph(image,currentRow,currentCol-1,color,m,n,newColor);
    
// //     return;
    

// // }
// };