#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int edge_remover(vector<int> adj[], int n, int m, int k){

    int count_component = 0, span_edges = 0, visited[n+1] = {0};

    queue<int> q;

    for(int j=1;j<=n;j++){

        if (visited[j] == 0){

            q.push(j);

            visited[j] = 1;

            while(!q.empty()){

                int x = q.front();

                q.pop();

                for(auto i=adj[x].begin();i!=adj[x].end();i++){

                    if (visited[*i] == 0){

                        span_edges++;

                        q.push(*i);

                        visited[*i] = 1;

                    }

                }

            }

            count_component++;

        }

    }

    if (count_component > k){
            return -1;
    }
    return (m - span_edges) + (k - count_component);

}

int main()
{
    int n,m,k,u,v;
    cin>>n>>m>>k;
    vector<int> adj[n+1];
    for(int i = 0; i< m; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<edge_remover(adj, n, m, k);
    return 0;
}
