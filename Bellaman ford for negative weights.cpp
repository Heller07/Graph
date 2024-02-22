//For negative weights and directed graph
//for negative cycle - Yes or no ,,we can't find negative shortest path with it
//if negative cycle is not there then we can find shortest path


vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int> dist(n+1,1e8);
    dist[src] = 0;

    for(int i = 1;i<n;i++){
        //traverse on edge list
        for(int j = 0;j<m;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if((dist[u]+wt) < dist[v]){
                dist[v] = dist[u] + wt;
            }
                    }

    }
    //checking for negative cycle
    bool flag = 0;
    for(int i = 1;i<n;i++){
        //traverse on edge list
        for(int j = 0;j<m;j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if((dist[u]+wt) < dist[v]){
                flag = 1;
            }
                    }
    }

    if(flag == 0){
        return dist;
    }
    
}
