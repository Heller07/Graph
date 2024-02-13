#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;
//agar sorted order me chiye bfs to list ki jaga set kr do or push_back ki jaga insert kardo
void prepareADJL(unordered_map<int,list<int> >adjL, vector<pair<int,int>> &edges){
   for (int i = 0; i < edges.size(); i++)
   {
    int u = edges[i].first;
    int v = edges[i].second;

    adjL[u].push_back(v);
    adjL[v].push_back(u);

   }
   
}
void bfs(unordered_map<int,list<int> >&adjL,unordered_map<int,bool >&visited,vector<int> ans,int node){
    queue<int> q;
    q.push(node);
    visited[node] = 1;
    while(!q.empty()){
        int frontnode = q.front();
        q.pop();
        //store frontnode into ans
        ans.push_back(frontnode);
        //traverse all neighbours of frontnode
        for(auto i: adjL[frontnode]){
        if(!visited[i]){
            q.push(i);
            visited[i] = 1;
        }
        }
    }

}


vector<int> BFS(int vertex, vector<pair<int,int>> &edges){//vertex==no. of nodes
    // Write your code here.
   unordered_map<int,list<int> >adjL;
   vector<int> ans;
   unordered_map<int,bool >visited;
   
   prepareADJL(adjL,edges);

   //traverse all components of a graph
   for (int i = 0; i < vertex; i++)
   {
    if(!visited[i]){
        bfs(adjL,visited,ans,i);//bfs for printing
    }
   }
   
   
}
int main(){


}
