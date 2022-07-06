#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }
    void addEdge(int x, int y ){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printAdLIst(){
        for (int i = 0; i < V; i++)
        {
            cout<<"Vertex"<<i<<" --> ";
            for(int nbr:l[i]){
                cout<<nbr<<", ";
            }
            cout<<endl;
        }
    }
    void bfs(int src){
        bool visited[V];
        for(int i = 0; i < V; i++){
            visited[i] = false;
        }
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            int temp = q.front();
            cout<<temp<<" ";
            q.pop();
            for(int i:l[temp]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
        
    }
    void dfs_helper(int src, bool visited[]){
        cout<<src<<" ";
        visited[src] = true;
        for(int nbr:l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited);
            }
        }
    }
    void dfs(int src){
        bool visited[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }
        dfs_helper( src, visited);
        
    }

};

int main(){
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,2);
    g.printAdLIst();
    g.bfs(0);
    cout<<endl;
    g.dfs(3);
    return 0;
}