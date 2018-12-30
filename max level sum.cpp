int maxLevelSum(Node *node)
{
   //Your code here
   if(node==NULL) return 0;

   queue<Node*>q;
   q.push(node);
   
   int max=node->data;
   
   while(!q.empty())
   {
       int levelsize=q.size(), sum=0;
       while(levelsize>0)
       {
       sum=sum+q.front()->data;
       if(q.front()->left!=NULL) q.push(q.front()->left);
       if(q.front()->right!=NULL) q.push(q.front()->right);
       q.pop();
       levelsize--;
       }
    if(sum>max)max=sum;
   }
   return max;
}
