/*
    PRINTING IN SPRIRAL FORM METHOD 1

    void printSpiral(Node *root){
        if(root==NULL)  return;
        queue<Node *> q;
        stack<int> s;
        bool reverse = false;
        q.push(root);
        while(q.empty()==false){
            int count = q.size();
            for(int i =0;i<count;i++){
                Node *curr = q.top();
                q.pop();
                if(reverse)
                    s.push(curr->key);
                else
                    cout<<curr->key;
                if(curr->left != NULL)  q.push(curr->left);
                if(curr->right != NULL)  q.push(curr->right);
        }
        if(reverse){
            while(s.empty()==false){
            cout<<s.top;
            s.pop();
        }
    }
    reverse = !reverse
    }
}

                    METHOD 2 ::

    void printSpiral(Node *root){
        if(root==NULL)  return;

        stack<Node *> s;
        stack<Node *> t;
        s.push(root)

        while(!s.empty() || !t.empty()){
            while(!s.empty()){
                Node *curr= s.top();
                s.pop();
                cout<<curr->key<<" ";

                if(curr->right)
                    t.push(curr->right);
                if(curr->left)
                    t.push(curr->left);
                }
            while(!t.empty()){
            Node *curr = t.top();
            t.pop();
            cout<<curr-key<<" ";



        }
            }
}




*/
