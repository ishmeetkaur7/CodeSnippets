/* Computes the diameter of binary tree with given root.  */
int ans;
int h(Node* node)
{
    if(node==NULL) return 0;
    int lh=h(node->left);
    int rh=h(node->right);
    ans =max(ans, lh+rh+1);
    return max(lh,rh) +1;
}
int diameter(Node* node)
{
   // Your code here
   ans=INT_MIN;
   int height= h(node);
   return ans;
}
