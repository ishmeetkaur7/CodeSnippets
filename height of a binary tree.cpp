int max(int a,int b)
{    return a>b?a:b;}
    
int height(Node* node)
{
   // Your code here
   if(node==NULL) return 0;
   return 1+ max(height(node->left),height(node->right));
}
