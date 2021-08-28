#include<bits/stdc++.h>
using namespace std;

int bigmod(int b, int p, int m)
{
  if(p==0)
    return 1;
  if(p%2==0)
  {
    int x=bigmod(b,p/2,m);
    return ((x%m)*(x%m))%m;
  }
  else return (b%m * bigmod(b,p-1,m))%m;
}
int main()
{
  int b,p,m;
  while(cin>>b>>p>>m)
    cout<<bigmod(b,p,m)<<endl;
  return 0;
}
