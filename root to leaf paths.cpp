/* The function should print all the paths from root
 to leaf nodes of the binary tree */
void f(Node* node, int path[], int len)
{
    if(node==NULL) return;
    path[len++]=node->data;
    if(node->left==NULL && node->right==NULL)
    {
        for(int i=0;i<len;i++){
            cout<<path[i]<<" ";
        }
        cout<<"#";
    }
    f(node->left,path,len);
    f(node->right,path, len);
}
void printPaths(Node* node)
{
    int path[10000];
    f(node,path,0);
    cout<<endl;
}
