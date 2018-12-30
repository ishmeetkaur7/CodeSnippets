void f(Node *node, int hd, map<int,int>&m)
{
    if(node==NULL) return;
    f(node->left,hd-1,m);
    m[hd]+=node->data;
    f(node->right,hd+1,m);
}
void printVertical(Node *root)
{
//add code here.
map <int,int> m;
f(root, 0, m);
for(auto i=m.begin();i!=m.end();i++)
    cout<<i->second<<" ";
}
