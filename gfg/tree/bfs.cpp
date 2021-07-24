/*
    level orderal traversal
    1. find height of tree
    2. call k+1 element but above sol is inefficient


    need to use queue here in O(n) and O(n) time and space

    void printLevel(Node *root){
    if(root==NULL)  return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
    Node *curr = q.front();
    q.pop();
    cout<<curr->key<<" ";
    if(curr->left != NULL)  q.push(curr->left);
    if(curr->right != NULL) q.push(curr->right);
    }
}

LEVEL ORDER TRAVERSAL LINE BY LINE

    1st soln .

    void LineByLine(Node *root){
    if(root==NULL)  return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(q.size()>1){
    Node *curr = q.front();
    q.pop();
    if(curr==NULL){
    cout<<"\n";
    q.push(NULL);
    continue;
    }
    cout<<curr->key<" ";

    if(curr->left != NULL)  q.push(curr->left);
    if(curr->right != NULL) q.push(curr->right);
}
}
method 2 ::::::

void lineByline(Node *root){
if(root==NULL)  return;

queue<Node *> q;
q.push(root);
while(q.empty()==false){
    int count = q.size();
    for(int i = 0;i< count;i++){
        Node *curr = q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left != NULL)  q.push(curr->left);
        if(curr->right != NULL)  q.push(curr->right);

        }
        cout<<"\n";
    }
}
    */
