void f(Node *root, map<int, vector<int>> &m, int hd)
{
    if(root==NULL) return;
    m[hd].push_back(root->data);
    if(root->left) f(root->left, m, hd-1);
    if(root->right) f(root->right, m, hd+1);
}
void verticalOrder(Node *root)
{
    //Your code here
    int hd=0;
    map<int, vector<int> >m;
    f(root,m,hd);
    for(auto i=m.begin();i!=m.end();i++)
    {
        for(int j=0;j<i->second.size();j++)
        cout<<m[i->first][j]<<" ";
    }
}
