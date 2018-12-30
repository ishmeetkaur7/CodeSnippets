int getLevelDiff(Node *node)
{
   //Your code here
  queue<Node*>q;
  q.push(node);
  int ans=0,level=1;
  while(!q.empty())
  {
      int levelsize=q.size();
      while(levelsize>0)
      {
        if(level%2==0)ans-=q.front()->data;
        else ans+=q.front()->data;
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        q.pop();
        levelsize--;
      }
      level++;
  }
  return ans;
}
