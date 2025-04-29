#include <iostream>
#include <unordered_map>
#include <list>


using namespace std;

class graph{
    public:
     unordered_map<int, list<int>>adj;

     void addedge(int u, int v, bool direction){
        adj[u].push_back(v);
        if (direction==0){
            adj[v].push_back(u);
        }

     }
     void printadjlist(){
        for (auto i:adj){
            cout<<i.first<<"->";
            for (auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
     }

};

int main() {
    int n;
    int m;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    cout<<"enter the number of edjes"<<endl;
    cin>>m;
    graph g;

    for (int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //undirected graph
        g.addedge(u,v,0);
    }
    g.printadjlist();
}
