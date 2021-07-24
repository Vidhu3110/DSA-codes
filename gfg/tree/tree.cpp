/*
    struct Node{
        int key;
        Node *left;
        Node *right;
        Node(int k){
            key = k;
            left = right = NULL;
    }
};

void inorder(Node *root){
if(root!=NULL){
inorder(root->left);
cout<<root->key<<" ";
inorder(root->right)
}
}

void preOrder(Node *root){
if(root!=NULL){
    cout<<root->key<<" ";
    preOrder(root->left);
    preOrder(root-right);
}
}

void postorder(){
if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    cout<<root->key<<" ";
}
}
*/
