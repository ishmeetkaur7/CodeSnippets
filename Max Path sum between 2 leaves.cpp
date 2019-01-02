int res;
int f(struct Node *root)
{
//add code here.
if(root==NULL) return 0;
if(!root->left && !root->right) return root->data;

int ls= f(root->left);
int rs= f(root->right);

//both child
if(root->left && root->right) 
{
    res= max(root->data+ls+rs, res);
    return max(ls,rs) +root->data;
}

//only 1 child
return (!root->left)? rs+root->data : ls+root->data; 
}
int maxPathSum(Node * root)
{
    res=INT_MIN;
    f(root);
    return res;
}
