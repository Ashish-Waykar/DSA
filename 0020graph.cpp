#include <iostream>
#include <vector>
using namespace std;

class Graph {
   vector<vector<int>> adj_list;
   int V;
public:
   Graph(int V) : V(V) {
      adj_list.resize(V);
   }
   void addEdge(int u, int v) {
      adj_list[u].push_back(v);
   }
   void printGraph() {
      for (int i = 0; i < V; i++) {
         cout << i << " -> ";
         for (int v : adj_list[i])
            cout << v << " ";
         cout << endl;
      }
   }
};

int main() {
   Graph g(5);
   g.addEdge(0, 1);
   g.addEdge(0, 4);
   g.addEdge(1, 2);
   g.addEdge(1, 3);
   g.addEdge(1, 4);
   g.addEdge(2, 3);
   g.addEdge(3, 4);
   g.printGraph();
   return 0;
}
