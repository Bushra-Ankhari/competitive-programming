#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll >sieve;
void SieveOfEratosthenes(ll n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    // prime[1]=true;
    for (ll p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (ll p=2; p<=n; p++)
        if (prime[p])
            sieve.push_back(p);
}
