#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll m;

//Finding (a^p)%p
ll bigmod(ll a,ll b)
{
    if(b==0)return 1;
	if(b==1) return a;
	ll x=bigmod(a,b/2);
	x=(x%m * x%m)%m;
	if(b%2==1)
        x=(x*a%m)%m;
    return x;
}

//Checking p is prime or not
bool isPrime(int num) {
    int i;
    for(i = 2; i <= sqrt(num); i++)
        if(num%i == 0)
            return false;
    return true;
}

//Driver function to run the program
int main()
{
      ll p,a;
      while(cin>>p>>a){
          //  if(!p or !a)return 0;
            m=p;
            ll r = bigmod(a,p);
            if((a%p == r) and !(isPrime(p)))cout<<"yes"<<endl;
            else cout<<"no"<<endl;
      }
}
