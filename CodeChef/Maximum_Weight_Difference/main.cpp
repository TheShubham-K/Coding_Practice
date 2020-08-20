#include <iostream>
#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main()
{
    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll a[n], sum=0, tmp,sk, m1, m2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum +=a[i];
        }
        sort(a,a+n);
        sk=accumulate(a,a+k,0ll);
        tmp=sum;
        tmp-=sk;
        m1=abs(sk-tmp);
        sk=0
        int cnt=1;
        for(int i=n-1;;i--){
            sk+=a[i];
            if(cnt==k)
                break;
            cnt++;
        }
        tmp=sum;
        tmp-=sk;
        m2=abs(sk-tmp);
        cout<<max(m1,m2)<<endl;
    }
    return 0;
}
