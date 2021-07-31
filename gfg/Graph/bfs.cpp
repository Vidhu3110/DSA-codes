/*
1 : Given an undirected graph and a source
vertex 's' ,print B.F.S. from given source.

void BFS(vector<int> adj[] , int v,int s){
    vector<bool> visited(v+1);
    fill(visited.begin(),visited.end(),false);

    queue<int>q;
    visited[s] = true;
    q.push(s);
    while(q.empty()==false){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : adj[u]){
            if(visited[v] == false){
                visited[v] = true;
                q.push(v);
        	}
    	}
	}
}

 B.F.S on disconnected graphs.

void BFS(vector<int> adj[],bool visited[],int s)
{
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while(q.empty()==false){
		int u = q.front();
		q.pop();
		cout<<u<<" ";
		for(int v : adj[u]){
			if(visited[v]==false){
				visited[v] = true;
				q.push(v);
			}
		}
	}
}
void Bfsdis(vector<int> adj[] , int v){
	bool visited[v+1];
	for(int i = 0 ;i<v;i++)
		visited[i] = false;
	for(int i = 0 ;i<v;i++)
		if(visited[i]==false)
			BFS(adj,visited,i);
}
O(V+E) time complexity ---------|





Print number of islands in a graph
 (or number of connected components in a graph).
 void BFS(vector<int> adj[],bool visited[],int s)
 {
 	queue<int> q;
 	visited[s] = true;
 	q.push(s);
 	while(q.empty()==false){
 		int u = q.front();
 		q.pop();
 		cout<<u<<" ";
 		for(int v : adj[u]){
 			if(visited[v]==false){
 				visited[v] = true;
 				q.push(v);
 			}
 		}
 	}
 }
 int Bfsdis(vector<int> adj[] , int v){
 	bool visited[v+1];
	int count = 0
 	for(int i = 0 ;i<v;i++)
 		visited[i] = false;
 	for(int i = 0 ;i<v;i++){
 		if(visited[i]==false){
 			BFS(adj,visited,i);
			count++;
 		}
	}
	return count;
}
*/
