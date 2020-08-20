#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int total=1<<n;
        bool flag=false;
        for(int k=1;k<total;k++){
            int sum=0;
            for(int i=0;i<n;i++){
                if(k&(1<<i))
                {
                    sum +=a[i];
                }
            }
            if(sum==m)
            {
                flag=true;
                break;
            }
        }
        flag ?cout<<"Yes\n" :cout<<"No\n";
    }
    return 0;
}
