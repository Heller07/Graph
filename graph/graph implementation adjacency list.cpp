#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph{

    public:
    unordered_map<int,list<int>> adjl;

    void addedge(int u,int v,bool direction){//TC and SC === O(nodes+edges)
        //direction = 0 ->undirected
        //direction = 1 -> directed graph
        //create an edge from u to v

        adjl[u].push_back(v);
        if (direction == 0)
        {
          adjl[v].push_back(u);
        }

        
    }

    void printAdjList(){
        for(auto i:adjl){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
  int n;
  cout<<"Enter the number of nodes "<<endl;
  cin>>n;
  int m;
  cout<<"Enter the number of edges "<<endl;
  cin>>m;

  graph g;
  
  for (int i = 0; i < m; i++)
  {
    int u,v;
    cin >>u >>v;
    g.addedge(u,v,0);//created an undirected graph


  }
  g.printAdjList();
  

}
