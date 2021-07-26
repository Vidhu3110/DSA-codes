/*
    tree to doubly link list
    Node *prev = NULL;
    Node * btToDouble(Node * root){
        if(root==NULL)  return root;
        Node *head = btToDouble(root->left)
        if(prev == NULL)    head = prev;
        else{
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    btToDouble(root->right);
    return head;
}

            BINARY TREE FROM INORDER AND PREORDER
    int preIndex = 0;
    Node *bt(int in[],int pre[],int is , int ie){
    if(is > ie) return NULL;
    Node *root = new Node(pre[preIndex++]);

    int inIndex;
    for(int i = is;i<=ie;i++){
        if(in[i]==root->key){
            inIndex = i;
            break;
            }
        }
    root->left = bt(in,pre,is,inIndex-1)
    root->left = bt(in,pre,inIndex+1,ie);
    return root;
}





*/
