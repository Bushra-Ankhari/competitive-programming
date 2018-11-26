# include <bits/stdc++.h>
using namespace std;
int main()
{
    long long b,i,p,m;
    while((cin>>b>>p>>m) &&(b,p,m)!=EOF)
    {
       long long x = 1;
        while(p)
        {
            if(p%2) x = (x*b)%m;
            b = (b*b)%m;
            p/=2;
        }
        printf("%lld\n",x);
    }
    return 0;
}
