 /*
    SUM OF children nodes equal to parent nodes
bool ischild(Node *root){
if(root==NULL)
    return true;
if(root->left == NULL && node->root == NULL)
    return true;
int sum =0;
if(root->left != NULL) sum+= root->left->key;
if(root->right != NULL) sum+= root->right->key;

return (root->key==sum && ischild(root->left) && ischild(root->right));
}


                            BALANCE BINARY TREE:

int isBal(Node *root){
if(root==NULL)  return 0;
int lh = isBal(root->left)
if(lh==-1)  return -1;
int rh = isBal(root->right);
if(rh == -1)    return -1;
if(abs(lh-rh)>1) return -1;
else
    return max(lh,rh)+1;
}


 */
