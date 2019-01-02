/* The below function should return the node which is 
inorder successor of given node x. */
Node * inOrderSuccessor(Node *root, Node *x)
{
    //Your code here
    if(x->right)
    {
        Node *temp= x->right;
        while(temp->left)
            temp=temp->left;
        return temp;
    }
    else
    {
        Node* ans=NULL;
        while(root!=NULL)
        {
        if(x->data < root->data)
        {
            ans=root;
            root=root->left;
        }
        else root=root->right;
        }
        return ans;
    }
}
