int f(Node *node)
{
    if(node==NULL) return 0;
    int x=node->data;
    node->data=f(node->left)+f(node->right);
     return x+node->data;
}

void toSumTree(Node *node)
{
    // Your code here
     f(node);
}
