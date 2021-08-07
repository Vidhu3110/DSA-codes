#include<bits/stdc++.h>
using namespace std;
class AdjNode{
    int v;
    int weight;
public:
    AdjNode(int _v , int _w){
        v = _v;
        weight = _w;
    }
    int getV(){ return v; }
    int getW(){return weight;}
};
class graph{
    int V;
    list<AdjNode> *adj;
    void topoSort(int v , bool visited[] , stack<int> &st);
public:
    graph(int V);
    void addEdge(int u , int v , int weight);
    void shortestPath(int s);
};
graph::graph(int V){
    this->V = V;
    adj = new list<AdjNode>[V];
}
void graph::addEdge(int u , int v , int weight){
    AdjNode node(v,weight);
    adj[u].push_back(node);
}
void graph:: topoSort(int v , bool visited[],stack<int> &st){
    visited[v] = true;
    list<AdjNode> :: iterator i;
    for(i=adj[v].begin();i!=adj[v].end();++i){
        AdjNode node = *i;
        if(visited[node.getV()]==false)
            topoSort(node.getV(),visited,st);
    }
    st.push(v);
}

void graph:: shortestPath(int s){
    stack<int> st;
    int dist[V];
    bool visited[V];
    for(int i =0;i<V;i++)
        dist[i] = INT_MAX;
    for(int i =0;i<V;i++)
        visited[i] = false;
    dist[s]=0;
    for(int i =0;i<V;i++)
        if(visited[i]==false)
            topoSort(i,visited,st);

    while(st.empty()==false){
        int u = st.top();
        st.pop();
        list<AdjNode>::iterator i;
        if(dist[u]!=INT_MAX){
            for(i=adj[u].begin();i!=adj[u].end();++i)
                if(dist[i->getV()]>dist[u]+(i->getW()))
                    dist[i->getV()] = dist[u]+i->getW();
        }
    }
	for (int i = 0; i < V; i++)
		(dist[i] == INT_MAX)? cout << "INF ": cout << dist[i] << " ";
}
int main()
{
	graph g(6);
	g.addEdge(0, 1, 2);
	g.addEdge(0, 4, 1);
	g.addEdge(1, 2, 3);
	g.addEdge(4, 2, 2);
	g.addEdge(4, 5, 4);
	g.addEdge(2, 3, 6);
	g.addEdge(5, 3, 1);
	int s = 0;
	cout << "Following are shortest distances from source " << s <<" \n";
	g.shortestPath(s);
	return 0;
}
