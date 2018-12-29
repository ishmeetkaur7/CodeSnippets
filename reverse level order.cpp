//o/p: 4 5 2 3 1
void reversePrint(Node *root)
{
    //Your code here
    queue<Node*> q;
    stack<Node*>s;
    q.push(root);
    while(!q.empty())
    {
        s.push(q.front());
        if(q.front()->right) q.push(q.front()->right);
        if(q.front()->left) q.push(q.front()->left);
        q.pop();
    }
    while(!s.empty())
    {
        cout<<s.top()->data<<" ";
        s.pop();
    }
    
}
