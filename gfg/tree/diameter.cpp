/*
    better solution
    int res = 0;
    int diameter(Node *root){
        if(root==NULL) return 0;
        int lh = diameter(root->left);
        int rh = diameter(root->right);

        res = max(res,lh+rh+1);
        return 1 + max(lh,rh);
}
*/
