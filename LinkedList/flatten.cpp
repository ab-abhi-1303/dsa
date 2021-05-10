/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

Node* merge(Node* a, Node* b){
    if(!a) return b;
    if(!b) return a;
    if(a->data <= b->data){
        a->bottom = merge(a->bottom, b);
        return a;
    }
    else{
        b->bottom = merge(a, b->bottom);
        return b;
    }
}

/*  Function which returns the  root of 
    the flattened linked list. */
Node *flatten(Node *root)
{
   // Your code here
   if(!root) return NULL;
   if(!root -> next)
    return root;
    
    Node *x = root->next->next;
    
    Node *temp = merge(root, root->next);
    temp-> next = x;
    return flatten(temp);
   
}