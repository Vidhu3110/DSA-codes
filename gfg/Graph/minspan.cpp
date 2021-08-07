/*
     prim's algo
     void primsMST(vector<int>graph[],int v){
     int key[v],res=0;
     fill(key,key+v,INT_MAX);
     bool mst[v] = {false} ;


     for(int i =0;i<v;i++){
        int u = -1;
        for(int j = 0;j<v;j++)
            if(!mst[j] && (u==-1 || key[j]<key[u]))
                u=j;
        mst[u] = true;
        res += key[u];

        for(int i =0;i<v;i++)
            if(graph[u][i]!=0 && !mst[i])
                key[i] = min(key[i],graph[u][i]);
     }
     return res;
 }
*/
