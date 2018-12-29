void levelOrder(Node* node)
{
  //Your code here
  queue<Node*>q;
  q.push(node);
  while(!q.empty())
  {
      int levelsize=q.size();
      while(levelsize>0)
      {
          cout<<q.front()->data<<" ";
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        q.pop();
        levelsize--;
      }
      cout<<"\n";
  }
}
