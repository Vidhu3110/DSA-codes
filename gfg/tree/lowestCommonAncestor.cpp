/*
        efficient solution : : :  : ; ; : : : :
        it will work only if keys are present

Node *lca(Node *root,int n1, int n2){
    if(root == NULL)    return NULL;

    if(root->key == n1 || root->key == n2)
        return root;

        Node *lca1 = lac(root->left,n1,n2);
        Node *lca2 = lac(root->right,n1,n2);

        if(lca1 != NULL && lca2 != NULL)
            return root;
        if(lca != NULL)
            return lca1;
        else
            return lca2;
}

*/
