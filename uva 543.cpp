#include<bits/stdc++.h>
#include<limits.h>
#include<iostream>
using namespace std;
using ll=long long;
#define MAX 32000//root of 10^9
#define N 1000000


int primes[N];

int sieve(){

    int i = 2;


    for(; i <= N; ++i)
        primes[i] = 1;


    primes[0] = primes[1] = 0;

    int len = sqrt(N);

    for(i = 2; i <= len; ++i){
        if(primes[i]){

            for( int k = i * i; k <= N; k += i )
                primes[k] = 0;
        }
    }


    primes[2] = 0;
    //for(int i=0;i<20;i++){
      //  cout<<primes[i]<<endl;
    //}

}

int main() {

sieve();

    int n;


    while(scanf("%d", &n) && n){



        for(int i=3;i<n;++i){

            if( primes[i] ){


                int b = n - i;

                if( primes[b] ){
                    printf("%d = %d + %d\n", n, i, b);
                    break;
                }

            }
        }

    }




    return 0;
}
