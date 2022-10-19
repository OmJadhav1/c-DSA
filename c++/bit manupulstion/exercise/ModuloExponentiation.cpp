#include <iostream>
using namespace std;
 
//not done by bit manupulation
int power(long &x, long y, int mod)
{
    // your code goes here
    long abc=x;
    for(int i=1; i<y;i++){
        x=x*abc;
    }
    long ans=x%mod;
    return ans;    
}

int main() {
 
    long x,y,mod;
    cin>>x>>y>>mod;

    long ans =power(x,y,mod);
    cout<<ans;


     return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main() {
 
int x=2;
int abc=x;
for(int i=1; i<2;i++){
    x *= abc;
}
cout<<x;

     return 0;
}*/

