/*
    create an empty priority queue
    dist[v] = {INT_MAX};
    dist[s] = 0;
    insert all distance into pq
    while(pq.empty()==false)
        u = pq.extractMin();
        relax(u,v)

vector<int> dijkstra(vector<int> graph[],int V,int src){
    vector<int> dist(V,INT_MAX);
    dist[src] = 0;
    vector<bool> fin(V,false);

    for(int count =0;count<V;count++){
        int u = -1;
        for(int i =0;i<V;i++){
            if(!fin[i] && (u==-1 || dist[i]<dist[u]))
                u = i;
        }
        fin[u]=true;
        for(int v =0;v<V;v++)
            if(graph[u][v]!=0 && fin[v]==false)
                dist[v] = min(dist[v],dist[u]+graph[u][v]);
    }
    return dist;
}

*/
