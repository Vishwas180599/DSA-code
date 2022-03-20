// class Solution {
// public:
        
// void generateAllCombination(string digits,int currentIndex,string currentString,vector<string>&answer,unordered_map<char,string>&mp){
//     if(currentIndex >= digits.size())
//     {
//         answer.push_back(currentString);
//         return;
//     }
    
//     char currentChar=digits[currentIndex];
//     string mapping = mp[currentChar];
    
//     for(int i=0;i<mapping.size();i++){
//         generateAllCombination(digits,currentIndex+1,currentString+mapping[i],answer,mp)        ;
//     }
//     return;
// }
//     vector<string> letterCombinations(string digits) {
//         unordered_map<char,string> mp{
            
//             {'2',"abc"},
//             {'3',"def"},
//             {'4',"ghi"},
//             {'5',"jkl"},
//             {'6',"mno"},
//             {'7',"pqrs"},
//             {'8',"tuv"},
//             {'9',"wxyz"}
//         };
//         vector<string> answer;
        
//         if(digits.size()==0)
//             return answer;
        
//         generateAllCombination(digits,0,"",answer,mp);
//         return answer;
//     }

// };