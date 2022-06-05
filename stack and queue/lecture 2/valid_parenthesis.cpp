// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> stack;
        
//         for(int i=0;i<s.size();i++){
//             char currentChar=s[i];
            
//             if(currentChar=='('||currentChar=='['||currentChar=='{')
//                 stack.push(currentChar);
//             else{
//                 if(stack.empty())
//                     return false;
//                 if(currentChar==')'&&stack.top()=='(')
//                     stack.pop();
//                 else if(currentChar==']'&&stack.top()=='[')
//                     stack.pop();
//                 else if(currentChar=='}'&&stack.top()=='{')
//                     stack.pop();
//                 else
//                     return false;
                
//             }
//         }
//         return stack.empty();
//     }
// };