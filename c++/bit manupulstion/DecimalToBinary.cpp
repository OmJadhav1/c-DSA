#include <bits/stdc++.h>
using namespace std;
//using reverse no , exponential program
/*int dtob(int n)
{
    int a = 1;
    int ans = 0;
    int rem = 0;
    while (n > 0)
    {
        rem = n % 2;
        n = n / 2;
        ans += rem * a;
        a = a * 10;
        // n>>1;
    }
    return ans;
}
*/
// with bit manuplation 
int dtob(int n){

    int ans=0;
    int a=1;

    while(n>0){
        int bit = (n&1);
        ans += bit*a;

        a=a*10;
        n= n>>1;

    }
return ans;

}
int main()
{
    int n;
    cin >> n;

    int ans = dtob(n);
    cout << ans;

    return 0;
}