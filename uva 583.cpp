#include<bits/stdc++.h>
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
int main()
{
    sieve();

	long n;
	while ( ~scanf("%ld",&n) && n ) {
		printf("%ld =",n);
		bool first = true;
		if ( n < 0 ) {
			printf(" -1");
			first = false;
			n *= -1;
		}
		for ( int i = 0 ; n > 1 && i < MAX ; ++ i )
			while ( n%primes[i] == 0 ) {
				if ( first ) {
					printf(" %d",primes[i]);
					first = false;
				}else printf(" x %d",primes[i]);
				n /= primes[i];
			}
		if ( n != 1 ) {
			if ( first ) printf(" %d\n",n);
			else printf(" x %d\n",n);
		}else printf("\n");
	}

	return 0;
}
