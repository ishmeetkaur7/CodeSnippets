void bottomView(Node *root)
{
   // Your Code Here
   if(root==NULL) return;
   map<int, int> m;
   queue<pair<Node*,int>> q;
   int hd=0;
   q.push(make_pair(root,hd));
   while(!q.empty())
   {
       Node* temp=q.front().first;
       hd=q.front().second;
       m[hd]=temp->data;
       if(temp->left) q.push(make_pair(temp->left,hd-1));
       if(temp->right) q.push(make_pair(temp->right,hd+1));
       q.pop();
   }
   for(auto i=m.begin();i!=m.end();i++)
    cout<<i->second<<" ";
   
}
