// // { Driver Code Starts
// // C++ implementation to convert infix expression to postfix
// #include <bits/stdc++.h>
// using namespace std;


//  // } Driver Code Ends
// class Solution {
//   public:
//     // Function to convert an infix expression to a postfix expression.
//     string infixToPostfix(string s) {
//         // Your code here
//         stack<char> stack;
//         unordered_map<char,int>mp;
        
//         mp.insert({'^',3});
//         mp.insert({'*',2});
//         mp.insert({'/',2});
//         mp.insert({'+',1});
//         mp.insert({'-',1});
        
//         string result = "";
    
//         for(int i=0;i<s.size();i++){
//             char currChar = s[i];
            
//             if(mp.find(currChar)==mp.end()){
//                 if(currChar=='(')
//                     stack.push(currChar);
//                 else if (currChar==')'){
//                     while(!stack.empty()&&stack.top()!='('){
//                        result+=stack.top();
//                        stack.pop();
//                     }
                       
//                     stack.pop();
                    
//                 }
//                 else {
//                     result+=currChar;
//                 }
                
//             }
//             else{
//                 while(!stack.empty()&&stack.top()!='('&&mp[stack.top()]>=mp[currChar]){
//                     result+=stack.top();
//                     stack.pop();
//                 }   
//                 stack.push(currChar);
//                 }
            
//         }
//         while(!stack.empty()){
//             result+=stack.top();
//             stack.pop();
//         }

//         return result;
//     }
        
// };


// // { Driver Code Starts.
// // Driver program to test above functions
// int main() {
//     int t;
//     cin >> t;
//     cin.ignore(INT_MAX, '\n');
//     while (t--) {
//         string exp;
//         cin >> exp;
//         Solution ob;
//         cout << ob.infixToPostfix(exp) << endl;
//     }
//     return 0;
// }
//   // } Driver Code Ends