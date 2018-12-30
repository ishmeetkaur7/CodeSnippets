// Should return true if tree is Sum Tree, else false
bool isSumTree(Node* root)
{
     // Your code here
    if(root==NULL)return 1;
    if(root->left==NULL && root->right==NULL) return 1;
    //find ls and rs

    int ls,rs;
    if(root->left==NULL)ls=0;
    else if(root->left->left==NULL && root->left->right==NULL) ls=root->left->data;
    else ls=2*root->left->data;
    
    if(root->right==NULL)rs=0;
    else if(root->right->left==NULL && root->right->right==NULL) rs=root->right->data;
    else rs=2*root->right->data;
    
    return (root->data==ls+rs) && isSumTree(root->left) && isSumTree(root->right);
    
}
