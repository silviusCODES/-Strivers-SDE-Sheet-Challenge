//Function to return a list containing elements of left view of the binary tree.
void rec(Node* root, int level, vector<int> &ans){
    if(root == NULL) return;
    if(ans.size() == level) ans.push_back(root -> data);
    rec(root -> left, level + 1, ans);
    rec(root -> right, level + 1, ans);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   rec(root, 0, ans);
   
   return ans;
}
