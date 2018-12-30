int sumLeaf(Node* root)
{
    // Code here
    if(root==NULL) return 0;
    int ans =0;
    if(!root->left && !root->right) ans= root->data;
    return ans+sumLeaf(root->left)+sumLeaf(root->right);
}
