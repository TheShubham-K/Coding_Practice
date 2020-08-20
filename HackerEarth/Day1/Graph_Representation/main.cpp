#include <iostream>
#include <vector>

using namespace std;

int matrix[1001][1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,q,n,m,a,b;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>a>>b;
        if(matrix[a][b] == 1)
        {
            cout<<  "YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}


/**
vector <int> adj[10];

    int main()
    {
        int x, y, nodes, edges;
        cin >> nodes;       //Number of nodes
        cin >> edges;       //Number of edges
        for(int i = 0;i < edges;++i)
        {
                cin >> x >> y;
            adj[x].push_back(y);        //Insert y in adjacency list of x
         }
    for(int i = 1;i <= nodes;++i)
    {
            cout << "Adjacency list of node " << i << ": ";
        for(int j = 0;j < adj[i].size();++j)
            {
            if(j == adj[i].size() - 1)
                    cout << adj[i][j] << endl;
            else
                cout << adj[i][j] << " --> ";
    }
    }
    return 0;
    }

*/
/**

int A[10][10];

void initialize()
{
    for(int i=0;i<=10;i++)
        for(int j=0;j<=10;j++)
            A[i][j] = 0;
}

int main()
{
    int x, y, nodes, edges;
    initialize();
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        cin>>x>>y;
        A[x][y] = 1;
    }
    for(int i =1;i<=nodes;i++){
            for(int j=1;j<=nodes;j++){

                if(A[i][j] == 1){
                    cout<<"There is an edge between "<<i<<" and "<<j<<endl;
                }else{
                    cout<<"There is no edge between "<<i<<" and "<<j<<endl;
                }
            }
    }
    return 0;
}
*/
