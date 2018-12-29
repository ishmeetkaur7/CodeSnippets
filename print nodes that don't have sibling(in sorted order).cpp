set<int>s;
void f(Node* node)
{
    if(node==NULL) return;
    if(node->left && node->right)
    {f(node->left);f(node->right);}
    else if(node->right!=NULL) 
    {s.insert(node->right->data);f(node->right);}
    else if(node->left!=NULL) 
    {s.insert(node->left->data);f(node->left);}
}
void printSibling(Node* node)
{
   s.clear();
   f(node);
//   cout<<s.size()<<endl;
   if(s.size()==0) {cout<<"-1";}
   else{
       set<int>::iterator i;
       for(i=s.begin();i!=s.end();i++)
       cout<<(*i)<<" ";
   }
    
}
