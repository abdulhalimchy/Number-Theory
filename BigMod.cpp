#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL BigMod(LL a, LL b, LL m)
{
    if(b==0)
        return 1%m;
    LL x = BigMod(a,b/2, m);
    x = (x*x)%m;
    if(b%2==1)
        x = (x*a)%m;
    return  x;
}

int main()
{
    int n, a, mod;
    while(cin>>n>>a>>mod)
    {
        cout << BigMod(n, a, mod) << endl;
    }

    return 0;
}
