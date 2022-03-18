// #include<bits/stdc++.h>
// using namespace std;
 
// int solution(string str, int k) {
// 	// write your code here
//     int ans = 0,distinctCount=0,relese=0;
//     unordered_map<char,int>mp;
//     for(int acquire=0;acquire<str.size();acquire++){
//         char currChar = str[acquire];
//         if(mp.find(currChar)!=mp.end()){
//             mp[currChar]+=1;

//         }
//         else{
//             distinctCount+=1;
//             mp[currChar]=1;
//         }
//         while(relese<=acquire && distinctCount>k){
//             char disChar=str[relese];
//             mp[disChar]-=1;
//             relese+=1;

//             if(mp[disChar]==0){
//                 mp.erase(disChar);
//                 distinctCount-=1;
//             }
//         }
//         ans+=(acquire-relese+1);
//     }
//     return ans;
// }

// int main() {
//     string str;
//     int k;
//     cin >> str >> k;
// 	cout << solution(str,k);
// }