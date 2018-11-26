#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define ll long long
#define pb push_back
#define maX 1000001
#define maxx 1000001
vector<int> prime;
bool primec[maxx];

void SieveOfEratosthenes()
{
    memset(primec,true,sizeof(primec));
    primec[0] = primec[1] = false;
    for (int i=4; i<maxx; i+=2)
        primec[i] = false;
    for (int i=3; i*i<maxx; i+=2)
        if (primec[i])
            for (int j=i*i; j<maxx; j+=i+i)
                primec[j] = false;
    prime.pb(2);
    for (int i=3; i<maxx; i+=2)
        if (primec[i])
            prime.pb(i);
}

int main()
{
    ll n;
    SieveOfEratosthenes();
    while(cin>>n&&n!=0)
    {
        int i=0;

        int ck=0;
        int max;
        for(i=0; prime[i]<=n/2; i++)
        {

            if(n%prime[i]==0)
            {
                max=prime[i];
                ck++;
            }
        }
        if(ck>1)
            pf("%d\n",max);
        else
            pf("-1\n");
    }

    return 0;
}
