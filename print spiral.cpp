//o.p: 1 2 3 4 5
void printSpiral(Node *root)
{
     //Your code here
     stack<Node*>s1;
     stack<Node*>s2;
     s1.push(root);
     while(!s1.empty() || !s2.empty())
     {
         while(!s1.empty())
         {
             cout<<s1.top()->data<<" ";
             if(s1.top()->right) s2.push(s1.top()->right);
             if(s1.top()->left) s2.push(s1.top()->left);
             s1.pop();
         }
         while(!s2.empty())
         {
             cout<<s2.top()->data<<" ";
             if(s2.top()->left) s1.push(s2.top()->left);
             if(s2.top()->right) s1.push(s2.top()->right);
             s2.pop();
         }
     }
}
