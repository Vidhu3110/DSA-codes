/*
undirected graph cycle

    defsrec(adj,s,visited,parent){
    visited[s] = true;
    for(int u : adj[s]){
    if(visited[u]==false)
        if(dfsrec(adj,u,visited,s)==true)
            return true
        else if(u!=parent)
            return true;
}
return false
}

bool dfs(adj,v){
bool visited[v]={false};
for(int i =0;i<v;i++){
    if(visited[i]==false){
        if(dfsrec(adj,i,visited,-1)==true)
            return true;
        }
    }
    return false;
}


directed graph cycle

defsrec(adj,s,visited[],recst[]){
visited[s] = true;
recst[s] = true;
for(int u : adj[s]){
    if(visited[u]==false && dfsrec(adj,u,visited,recst))
        return true;
    else if(recst[u]==true)
        return true;
}
recst[s] = false;
return false;
}

bool dfs(adj,v){
bool visited[v]={false};
bool recst[v] = {false};
for(int i =0;i<v;i++){
    if(visited[i]==false){
        if(dfsrec(adj,i,visited,recst)==true)
            return true;
        }
    }
    return false;
}

directed graph cycle by kahn's algorithm

bool cycleDetect(vector<int> adj[],int v){

vector<int> inDegree(v,0);
for(int i = 0;i<v;i++)
    for(int u : adj[i])
        inDegree[u]++;

queue<int> q;
for(int i =0;i<v;i++)
    if(inDegree[i]==0)
        q.push(i);
int count =0;
while(!q.empty()){
    int u = q.front();
    q.pop();
    for(int x : adj[u])
        if(--inDegree[x] == 0)
            q.push(x);
    count++;
}
if(count!=v)    return true
else    return false;





*/
