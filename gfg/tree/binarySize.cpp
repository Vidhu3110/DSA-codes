/*
    int getSize(Node *root){
        if(root==NULL)
            return 0;
        else
            return 1+getsize(root->left)+getsize(root->right);
}

MAXIMUM IN BINARY TREE
    int maxValue(Node *root){
    if(root==NULL)  return INT_MIN;
    else
        return max(root->key,max(maxValue(root->left),maxValue(root->right)));
}
recursive solution for printing left binary tree
int maxlevel = 0;
    void printLeft(Node *root,int level){
    if(root==NULL)  return ;
    if(maxlevel > level){
        cout<<root->key<<" ";
        maxlevel = level;
    }
    printleft(root->left,level+1);
    printleft(root->right,level+1);

}
void printLeftView(Node * root){
    printLeft(root,1);
}
ITERATIVE SOLUTION

    void printLeft(Node *root){
    if(root==NULL)  return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false){
    int count = q.size();
    for(int i = 0 ;i<count;i++){
        Node *curr = q.front();
        q.pop();
        if(i==0)
            cout<<curr->key<<" ";
        if(curr->left!= NULL)   q.push(curr->left);
        if(curr-right!=NULL)    q.push(curr->right);
        }
    }
}




*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    unordered_set<char> p;
    string curr="";

    cin>>s;

    for(int i =0;i<s.length();i++){
        p.insert(s[i]);
    }
    for(char i = p.begin();i<p.end();i++){
        curr = curr+i;
    }
    cout<<curr;
    return 0;
}
