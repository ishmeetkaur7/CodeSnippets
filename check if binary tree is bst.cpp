bool f(Node* root, int min, int max)
{
    if(root==NULL) return true;
    if(root->data>max || root->data<min) return false;
    return f(root->left, min,root->data-1) &f(root->right,root->data+1,max);
}
bool isBST(Node* root) {
    // Your code here
    return f(root, INT_MIN,INT_MAX);
}
