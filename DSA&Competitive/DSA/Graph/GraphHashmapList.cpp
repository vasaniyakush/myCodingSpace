#include<bits/stdc++.h>
using namespace std;

//we will create a graph where node is string and each 
//edge is weighted;

//   A------20---->B
//   |\            |
//   | \           |
//   |  \          |
//   |   \         |
//   |    \        |
//   |     \       |
//   10     50    30
//   |        \    |
//   |         \   |
//   |          \  |
//   C------40-----D
//<          map           >
//<str  <       list       >
//      <pair> <pair> <pair>
//      <int,str>  
// A -> (B,20),(C,10),(D,50)
// B -> (D,30)
// C -> (A,10), (D,40)
// D -> (C,40), (B,30)
class Graph{
    public:
    //adjlist 
    unordered_map<string,list< pair <string,int> > > l;
    void addEdge(string x, string y, bool bidir,int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidir){
            l[y].push_back(make_pair(x,wt));
        }
    }
    void printAdList(){
        for(pair< string,list< pair< string,int> > > x: l ){
            cout<<x.first<<" --> ";
            for(pair<string,int> p:x.second){
                cout<<"("<<p.first<<", "<<p.second<<"), ";
            }
            cout<<endl;
        }
    }


};

int main(){
    Graph g;
    g.addEdge("A","B",false,20);
    g.addEdge("A","C",true,10);
    g.addEdge("A","D",false,50);
    g.addEdge("B","D",false,40);
    g.addEdge("C","D",true,30);
    g.printAdList();
    

    return 0;
}