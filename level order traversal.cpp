void levelOrder(Node* node)
{
  //Your code here
  if(node==NULL) return;
  queue <Node*> q; 
  Node *temp_node=node;
  q.push(temp_node);
  while(q.empty()==false)
  {
      cout<<temp_node->data<<" ";
      if(temp_node->left!=NULL) q.push(temp_node->left);
      if(temp_node->right!=NULL) q.push(temp_node->right);
      q.pop();
      temp_node=q.front();
  }
  return;
  
}
