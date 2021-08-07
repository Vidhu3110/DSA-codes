/*

    shortest in unweighted graph
    
    void ShortestPath(vector<int>adj[],int s,int v int dist[]){
    bool visited[v];
    for(int i =0;i<v;i++)
        visited[i]=false;
    queue<int> q;
    visited[s] = true
    q.push(s);
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        for(int x : adj[u]){
        if(visited[x] == false){
            visited[x] = true;
            dist[x] = dist[u]+1;
            q.push(x);
            }
        }
    }
}
*/
