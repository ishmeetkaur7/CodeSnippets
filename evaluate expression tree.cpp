int evalTree(node* root)
{
    //Your code here
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL) return stoi(root->data);
    
    if(root->data=="+")
    return evalTree(root->left) + evalTree(root->right);
    if(root->data=="-")
    return evalTree(root->left) - evalTree(root->right);
    if(root->data=="*")
    return evalTree(root->left) * evalTree(root->right);
    if(root->data=="/")
    return evalTree(root->left) / evalTree(root->right);
}
