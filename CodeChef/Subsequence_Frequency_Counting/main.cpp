#include <bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mod 1000000007
#define LIMIT 500001

using namespace std;

// fatorial arry
ll fact[LIMIT];

ll power(ll x, ll y, ll p)
{
    ll res =1;
    x=x%p;
    while(y>0){
        if(y&1){
            res=(res*x)%p;
        }
        y=y>>1;
        x=(x*x)%p;
    }
    return res%p;
}

ll modInverse(ll n,ll p)
{
    return power(n,p-2,p);
}

ll nCrModPFermat(ll n, ll r, ll m)
{
    if(r==0)
        return 1;
    return (((fact[n]*modInverse(fact[n-r],mod))%m)*modInverse(fact[r],mod))%m;
}

void doItOnce()
{
    //fact initialize
    fact[0] = 1;
    fact[1] = 1;
    for(int i=2;i<LIMIT;i++){
        fact[i] = (1ll*fact[i-1]*i)%mod;
    }
}

int main()
{
    ios;
    doItOnce();
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        map<ll ll>fre;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            fre[arr[i]++;
        }
        ll prefix[n+3];
        ll suffix[n+1];
        for(int i=0;i<=n+1;i++){
            prefix[i]=1;
            suffix[i]=1;
        }
        for(auto each:fre)
        {
            ll total=1;
            for(int k=1;k<=each.second;k++)
            {
                total += nCrModPFermat(each.second,k,mod);
                total %=mod;
                prefix[k] *=total;
                prefix[k] %= mod;
            }
            suffix[each.second+1] *=total;
            suffix[each.second+1] %=mod;
        }

        ll mul=1;
        for(int i=1;i<=n;i++){
            mul *=suffix
        }
    }
    return 0;
}
