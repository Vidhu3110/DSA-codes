/*
    serialize and deserialize
    const int EMPTY =-1;
    void serialize(Node *root , vector<int> &arr){
        if(root==NULL){
            arr.push_back(EMPTY);
            return;
        }
        arr.push_back(root->key);
        serialize(root->left,arr);
        serialize(root->right,arr);
    }






    const int EMPTY = -1;
    int index=0;
    Node *deserialize(vector<int> &arr){
        if(index == arr.size()) return NULL;

        int val = arr[index];
        index++;

        if(val == EMPTY)    return NULL;

        Node *root = new Node(val);
        root->left = deserialize(arr);
        root->right = deserialize(arr);

        return root;
    }
*/
