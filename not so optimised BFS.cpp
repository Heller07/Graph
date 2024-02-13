#include<queue>

#include<unordered_map>

void bfs(vector<vector<int>> &adj,unordered_map<int,bool>& visited,vector<int>& ans,int node){

 

    queue<int>q;

    

    q.push(node);

    visited[node]=true;

 

    while(!q.empty()){

        //step1

        int front_node = q.front();

        //step2

        q.pop();

        //store in ans which is to be returned

        ans.push_back(front_node);

 

        //traversing the adjacent vertex of the node

        for(auto i: adj[front_node]){

            if(!visited[i]){

                q.push(i);

                visited[i]=true;

            }

        }

    }

    

}

 

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){

  

  unordered_map<int,bool> visited;

  vector<int> ans;

 

    //given that the breadth first traversal is starting form 0

    bfs(adj,visited,ans,0);

  return ans;

 

}
