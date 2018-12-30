//any no. ofleft and right child swaps are valid.

bool isIsomorphic(Node *root1,Node *root2)
{
//add code here.
if(!root1 && !root2) return 1;
if(root1 && root2)
{
    return (root1->data ==root2->data) && 
    (isIsomorphic(root1->left,root2->left) || isIsomorphic(root1->left,root2->right)) &&
    (isIsomorphic(root1->right,root2->right) || isIsomorphic(root1->right,root2->left));
    
}
else return 0;
}
