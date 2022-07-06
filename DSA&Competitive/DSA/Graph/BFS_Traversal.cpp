#include<bits/stdc++.h>
using namespace std;


template<class T>
class Graph{
    public:
    //adjlist 
    // unordered_map<string,list< pair <string,int> > > l;
    unordered_map<T,list<T> > l;
    void addEdge(T x, T y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs(T src){
        unordered_map<T,bool> visited;
        queue<T> q;

        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            T tnode = q.front();
            cout<<tnode<<" ";
            q.pop();
            for(T nbr:l[tnode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
    void dfs_helper(T src,unordered_map<T,bool> &visited){
        cout<<src<<" ";
        visited[src] = true;
        for(T nbr:l[src]){
            if(!visited[nbr]){

                dfs_helper(nbr,visited);
            }
        }
    }
    void dfs(T src){
        unordered_map<T, bool > visited;
        for(pair<T, list<T>> node:l){
            visited[node.first] = false;
        }
        dfs_helper(src,visited);
    }
};
int main(){
    Graph<int> g;
    g.addEdge(4,5);
    g.addEdge(1,2);
    g.addEdge(3,4);
    g.addEdge(3,0);
    g.addEdge(2,3);
    g.addEdge(0,1);
    g.bfs(0);
    cout<<endl;
    g.dfs(0);
    

    return 0;
}