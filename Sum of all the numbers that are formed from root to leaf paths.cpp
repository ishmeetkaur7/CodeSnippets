long long f(Node *root, long long val)
{
    if(root==NULL) return 0;
    val=(10*val+root->data);
    if(root->left==NULL && root->right==NULL) return val;
    return f(root->left,val)+f(root->right,val);
}
long long treePathsSum(Node *root)
{
    //Your code here
    return f(root,0);
}
