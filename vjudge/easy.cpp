#include<bits/stdc++.h>
using namespace std;

int is_prime (long int x)
 { int i;
    for ( i = 2; i * i <= x; i++)
    {
    if (x % i == 0)
    return 0;
    }
    return 1;
}

int main()
 {
 long int n;
while(scanf("%ld",&n)==1 )
    {
      int rev=0;
        int temp=n;
        while (temp)
        {
            rev=rev*10+temp%10;
            temp/=10;
        }
    if (is_prime(n)!=1)
     printf ("%ld is not prime.\n", n);
  else
    {
        int n1=rev;
    if ( is_prime(n1)==1 && n1!=n )
                printf ("%ld is emirp.\n",n);

            else
                printf ("%ld is prime.\n",n);
        }
    }
    return 0;
  }
