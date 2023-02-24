#include<iostream>
#include<map>
#include<list>
using namespace std;
class Graph{
    public:
        map<int , bool> visited;
        map<int,list<int>> adj;
        void addEdge(int v, int w);
        void DFSutil(int v);
        void DFS();
    };
void Graph::addEdge(int v , int w){
    adj[v].push_back(w);
}
void Graph::DFS(){
    for (auto i: adj){
        if(visited[i.first]==false)
            DFSutil(i.first);
    }
}
void Graph::DFSutil(int v){
    visited[v]=true;
    cout<<v<<" ";
    list<int>::iterator i;
    for (i=adj[v].begin();i!= adj[v].end();i++){
        if(!visited[*i]){
            DFSutil(*i);
        }
    }
}
int main(){
    Graph g ;
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(2,5);
    g.addEdge(4,6);
    g.addEdge(3,7);
    g.addEdge(3,9);

    // cout<<" Following Is The Depth First Traversal ( Starting From Vertex 2 ) \n";
    // g.DFSutil(2);

    cout<<" \nFollowing Is The Depth First Traversal \n";
    g.DFS();

    return 0;
}