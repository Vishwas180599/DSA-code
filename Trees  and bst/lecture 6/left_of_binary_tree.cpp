
// void leftSideView(Node* root ,int level,set<int>& s,vector<int>&answer){
//     if(root==NULL)
//     return;
    
//     if(s.find(level)==s.end()){
//         s.insert(level);
//         answer.push_back(root->data);
//     }
//     leftSideView(root->left,level+1,s,answer);
//     leftSideView(root->right,level+1,s,answer);
    
//     return;
// }

// vector<int> leftView(Node *root)
// {
//    // Your code here
//    vector<int> answer;
//    set<int> s;
//    leftSideView(root,1,s,answer);
//    return answer;
// }