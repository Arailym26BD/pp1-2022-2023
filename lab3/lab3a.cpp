#include <iostream>
using namespace std;
int main(){   
int n,u;   
cin>>n;   
int a[n];   
for(u=0; u<n; u++){             
 cin>>a[u];   
}   
cout<<endl;   
for(u=0; u<n; u++){       
if(a[u]%2 == 1){                    
cout<<a[u]<<" ";       
}   
}   
 return 0;
}
