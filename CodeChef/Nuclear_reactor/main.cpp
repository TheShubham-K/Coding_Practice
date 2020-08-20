#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll a,n,k;
    cin>>a>>n>>k;
    for(int i=1;i<=k;i++){
        cout<<a%(n+1)<<" ";
        a=a/(n+1);
    }
    return 0;
}
