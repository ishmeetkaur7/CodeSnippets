int areMirror(Node* a, Node* b)
{
   // Your code here
   if(!a && !b) return 1;
   if(a && b){
       return (a->data==b->data) && 
       areMirror(a->left,b->right) &&
       areMirror(a->right,b->left);
   }
   return 0;
}
