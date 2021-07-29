/*
    void Inorder(Node *root){
    stack<Node *> s;
    Node *curr = root;
    while(curr!=NULL || s.empty()){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr= s.top(); s.pop();
        cout<<(curr->key)<<" ";
        curr=curr->right;
    }
}

theta(n) tc ;;;;;;;


void preorder(Node *root){
    stack<Node *> s;
    s.push(root);
    while(s.empty()==NULL){
        Node * curr = s.top();
        cout<<curr->key<<" ";
        s.pop();

        if(curr->right != NULL)     s.push(curr->right);
        if(curr->left != NULL)     s.push(curr->left);
    }
}

void preorder(Node *root){
    if(root==NULL)  return;
    stack<Node *> s;
    s.push(root);
    Node *curr = root;
    while(curr != NULL ||s.empty()==false){
        while(curr!=NULL){
            cout<<curr->key<<" ";
            if(curr->right!=NULL)
                s.push(curr-.right);
            curr=curr->left;
        }
        if(s.empty()==false){
            curr = s.top();s.pop();
        }
    }
}
O(n) and O(h) time and space

*/
