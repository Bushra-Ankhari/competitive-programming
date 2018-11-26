#include<bits/stdc++.h>
#include<limits.h>
#include<iostream>
using namespace std;
using ll=long long;
#define MAX 32000//root of 10^9
vector<int>primes;


void sieve(){
    bool isprime[MAX];
    for(int i=0;i<MAX;++i) {isprime[i]=true;}
    for(int i=3;i*i<=MAX;i+=2){
        if(isprime[i]){
            for(int j=i*i;j<=MAX;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
  //  for(int i=0;i<100;i++){
    //    cout<<i<<" "<<(isprime[i]?"prime":"not prime")<<endl;
   // }
primes.push_back(2);
for(int i=3;i<MAX;i+=2){
        if(isprime[i])
    primes.push_back(i);
}
//for(int i=0;i<=100;i++){
    //cout<<primes[i]<<endl;
//}
}
void segmented_sieve(ll l,ll r){
    bool isprime[r-l+1];
    for(int i=0;i<r-l+1;++i) isprime[i]=true;
    if(l==1){isprime[0]=false;}
    for(int i=0;primes[i]*primes[i]<=r;++i){

        int currentprime=primes[i];
       // cout<<currentprime<<endl;
       ll base=(l/currentprime)*currentprime;
        if(base<l) base+=currentprime;
        for(int j=base;j<=r;j+=currentprime){
               isprime[j-l]=false;

        }
        if(base==currentprime){isprime[base-l]=true;}
    }

    for(int i=0;i<r-l+1;++i){
        if(isprime[i]){
            cout<<(i+l)<<endl;
        }
    }


}

int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--){
    ll l,r;
    cin>>l>>r;
    segmented_sieve(l,r);

    }
    return 0;

}
//https://www.spoj.com/problems/PRIME1/
