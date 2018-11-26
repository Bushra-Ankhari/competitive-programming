// CPP program to print prime factors and their
// powers.
#include <bits/stdc++.h>
using namespace std;

// function to calculate all the prime factors and
// count of every prime factor
void factorize(long long n)
{
    int count = 0;

    // count the number of times 2 divides
    while (!(n % 2)) {
        n >>= 1; // equivalent to n=n/2;
        count++;
    }

    // if 2 divides it
    if (count)
        cout << 2 << "  " << count << endl;

    // check for all the possible numbers that can
    // divide it
    for (long long i = 3; i <= sqrt(n); i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count)
            cout << i << "  " << count << endl;
           if(n==1){
                break;
            }
    }

    // if n at the end is a prime number.
    if (n > 2)
        cout << n << "  " << 1 << endl;
}

// driver program to test the above function
int main()
{
    //n<=10^18
    long long n = 1000000000000345300;
    factorize(n);
    return 0;
}
/*We cannot use Sieve’s implementation
 for a single large number as it requires proportional space.
 We first count the number of times 2 is the factor of the given number,
then we iterate from 3 to Sqrt(n)
to get the number of times a prime number divides a particular number
 which reduces every time by n/i. We divide our number n
 (whose prime factorization is to be calculated)
 by its corresponding smallest prime factor till n becomes 1.
And if at the end n>2,
it means its a prime number,
so we print that particular number.*/
