#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000000];
    for (int i = 0;i<1000000;i++){
        cin>>a[i];
    }
    for (int i = 0;i<1000000;i++){
        if(a[i] != 42){
            cout<<a[i]<<endl;
        }
        else{
            break;
        }
    }
    return 0;
}
