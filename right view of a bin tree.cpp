void f(Node* root, int level, int *maxlevel)
{
    if(root==NULL) return;
    if(level>*maxlevel) {cout<<root->data<<" "; *maxlevel=level;}
    
    f(root->right,level+1, maxlevel);
    f(root->left,level+1, maxlevel);
}
void rightView(Node *root)
{
   // Your Code here
   int maxlevel=0;
   f(root,1,&maxlevel);
}
