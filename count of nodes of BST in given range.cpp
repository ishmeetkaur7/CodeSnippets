int getCountOfNode(Node *root, int l, int h )
{
  // your code goes here   
  if(root==NULL) return 0;
  if(root->data==h && root->data==l) return 1;
  if(root->data>=l && root->data<=h) return 1+ 
  getCountOfNode(root->left,l,h)+  getCountOfNode(root->right,l,h);
  if(root->data<l) return getCountOfNode(root->right,l,h);
  if(root->data>h) return getCountOfNode(root->left,l,h);
}
