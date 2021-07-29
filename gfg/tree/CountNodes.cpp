 /*
    int count(Node *root){
        int lh =0 , rh=0;
        Node *curr = root;
        while(curr!=NULL){
            lh++;
            curr = curr->left;
    }
        curr= root;
        while(curr!=NULL){
            rh++;
            curr = curr->right;
        }
        if(lh==rh)
            return pow(2,lh)-1;
        return 1+count(root->left)+count(root->right);

tc ---> best case - theta(height of tree)
avg case --        theta(h) + log2 n
overall tc ----->  O(log n * log n)
}
 */
