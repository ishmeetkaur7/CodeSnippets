void connect(Node *p)
{
   // Your Code Here
   queue<Node*>q;
   Node * temp;
   q.push(p); q.push(NULL); 
   while(!q.empty())
   {
       temp=q.front();
       q.pop();
       if(temp!=NULL)
       {
            temp->nextRight=q.front();
            if(temp->left ) q.push(temp->left);
            if(temp->right) q.push(temp->right);
       }
       else
       {
            if(!q.empty()) q.push(NULL);
       }
       
   }
}
