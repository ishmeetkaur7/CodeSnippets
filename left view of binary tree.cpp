void f(Node*root, int level, int *maxlevel)
{
    if (root==NULL)  return; 
    if(level> *maxlevel){cout<<root->data<<" "; *maxlevel=level;}
    f(root->left, level+1,maxlevel);
    f(root->right, level+1,maxlevel);
    

}
void leftView(Node *root)
{
   // Your code here
   int maxlevel=0;
   f(root,1,&maxlevel);
}
