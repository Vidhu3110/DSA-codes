/*
void topologicalSort(vector<int> adj[],int v){
    vector<int> inDegree(v,0);
    for(int i = 0;i<v;i++)
        for(int u : adj[i])
            inDegree[u]++;
    queue<int> q;
    for(int i =0;i<v;i++)
        if(inDegree[i]==0)
            q.push(i);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<"";

        for(int x : adj[u]){
            if(--inDegree[x] == 0)
                q.push(x);
            }
    }
}

TOPOLOGICAL SORT BASED ON DFS

void DFS(vector<int> adj[],int u, stack<int> &st,bool visited[]){
    visited[u] = true;

    for(int v : adj[u])
        if(visited[v] == false)
            DFS(adj,v,st,visited);
    st.push(u);
}
void topologicalSort(vector<int> adj[],int v){
    bool visited[v];

    for(int i =0;i<v;i++)
        visited[i] = false;
    stack<int> st;

    for(int u =0;u<v;i++){
        if(visited[u]==false)
            DFS(adj,u,st,visited);
    }
    while(!st.empty()){
        int u = st.top();
        st.pop();
        cout<<u<<" ";
    }
}



*/
