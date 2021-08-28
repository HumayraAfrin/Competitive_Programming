#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll bigmod(ll b, ll p, ll m)
{
  if(p==0)
    return 1;
  if(p%2==0)
  {
    ll x=bigmod(b,p/2,m);
    return (x*x)%m;
  }
  else return (b%m * bigmod(b,p-1,m))%m;
}

bool isPrime(int num) {
    int i;
    for(i = 2; i <= sqrt(num); i++)
        if(num%i == 0)
            return false;
    return true;
}

int main()
{
  ll p,a,x;
   while(cin>>p>>a)
   {
     if(p==0 && a==0)
      break;
     x=bigmod(a,p,p);
     if ((a==x) and !(isPrime(p)))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
   }
 return 0;
}
