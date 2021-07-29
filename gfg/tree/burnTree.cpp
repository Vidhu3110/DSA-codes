/*
     int res = 0;
     int burnTree(Node *root,int leaf , int &dist){ //
        if(root==NULL)  return 0;
        if(root->key==leaf) {dist = 0; return 1;}

        int ldist = -1 ,rdist = -1;
        int lh = burnTree(root->left,leaf,ldist);
        int rh = burnTree(root->right,leaf,rdist);

        if(ldist != -1){
            dist = ldist+1;
            res = max(res,dist+rh);
        }
        else if(rdist!=-1){
            dist = rdist+1;
            res = max(res,dist+lh);
        }
        return (lh+rh)+1;
 }
*/
