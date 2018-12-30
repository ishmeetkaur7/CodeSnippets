int max(int a, int b)
{
    return a>b?a:b;
}
bool isLeaf(Node*node)
{
    return node->left && node->left->right==node &&
    node->right && node->right->left==node;
}
int findTreeHeight(Node* node)
{
	// Code here
	if(node==NULL) return 0;
	if(isLeaf(node)) return 1;
	return 1 + max(findTreeHeight(node->left),findTreeHeight(node->right));
}
