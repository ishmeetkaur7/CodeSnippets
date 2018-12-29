void verticalOrder(Node *root)
{
    //Your code here
    if(root==NULL) return;
    queue<pair<Node*,int>> q;
    int hd=0;
    q.push(make_pair(root,hd));
    map<int, vector<int> >m;
    while(!q.empty())
    {
        Node* temp =q.front().first;
        hd=q.front().second;
        m[hd].push_back(temp->data);
        if(temp->left) q.push(make_pair(temp->left,hd-1));
        if(temp->right) q.push(make_pair(temp->right,hd+1));
        q.pop();
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        for(int j=0;j<i->second.size();j++)
        cout<<m[i->first][j]<<" ";
    }
}
