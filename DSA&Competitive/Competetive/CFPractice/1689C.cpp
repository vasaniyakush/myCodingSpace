#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
ll m = 1e9 + 7;
double epsilon = 1e-6;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl;
#define endl "\n" 
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define REP(i, n) FOR(i, 0, n)
#define ALL(v) v.begin(), v.end()
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
        // l[y].push_back(x);
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
    int dfs_helper(int src, bool visited[]){
        static int count = 0;
        // cout<<src<<" ";
        count++;
        visited[src] = true;
        for(int nbr:l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited);
            }
        }
        return count;
    }
    void dfs(int src){
        bool visited[V] = {false};
        // for (int i = 0; i < V; i++)
        // {
        //     visited[i] = false;
        // }
        dfs_helper( src, visited);
        
    }

};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ttt = 1;
    cin>>ttt;
    while(ttt--){
        int n,i,j;
        bool inf[n + 1] = {false};

        Graph g(n);
        REP(i,n-1){
            cin>>i>>j;
            g.addEdge(i,j);
        }
        vi spr;
        inf[1] = true;
        while(spr.size() != 0){
            
        }

    }
    return 0;
}