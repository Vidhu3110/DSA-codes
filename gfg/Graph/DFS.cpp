/*
    :::::DFS CODE::::
    void DFSRec(vector<int> adj[],int s , bool visited){
    visited[s] = true;
    cout<<s<<" ";
    for(int u : adj[s])
    if(visited[u]==false)
        DFSRec(adj[],u,visited);
    }
    void DFS(vector<int> adj[],int v , int s){
        bool visited[v];
        for(int i =0;i<v;i++)
            visited[i] = false;
        DFSRec(adj,s,visited);
}


for disconnected graph
void DFSRec(vector<int> adj[],int s , bool visited){
visited[s] = true;
cout<<s<<" ";
for(int u : adj[s])
if(visited[u]==false)
    DFSRec(adj[],u,visited);
}
void DFS(vector<int> adj[],int v , int s){
    bool visited[v];
    for(int i =0;i<v;i++){
        if(visited[i]==false)
            DFSRec(adj,i,visited);
    }
}

    finding connected components ::
    void DFSRec(vector<int> adj[],int s , bool visited){
    visited[s] = true;
    cout<<s<<" ";
    for(int u : adj[s])
    if(visited[u]==false)
        DFSRec(adj[],u,visited);
    }
    int DFS(vector<int> adj[],int v , int s){
        bool visited[v];int count = 0;
        for(int i =0;i<v;i++){
            if(visited[i]==false){
                DFSRec(adj,i,visited);
                count++;
            }
        }
        return count;
    }
    O(v+e) ----- time complexity
*/
