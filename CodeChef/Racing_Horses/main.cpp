#include <iostream>
#include <cassert>
#include <stdlib.h>
#include <limits.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	//assert(t>=1 && t<=10);
	for (int i=0;i<t;i++){
	     int n;
	     cin>>n;
	     assert(n>=2 && n<=5000);
	     int s[n];
	     for (int j=0;j<n;j++){
	          cin>>s[j];
	     }
	     int min=INT_MAX;
	     for (int j=0;j<n;j++){
	          for (int k=j+1;k<n;k++){
	               if(abs(s[j]-s[k])<min){
	                    min=abs(s[j]-s[k]);
	               }
	          }
	     }
	     cout<<min<<endl;
	}
	return 0;
}
