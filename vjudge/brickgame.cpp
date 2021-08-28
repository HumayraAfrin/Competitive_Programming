#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,n,age[20],p;
  cin>>t;
  for(int i=1; i<=t; i++)
  {
    cin>>n;
    for(int j=0; j<n; j++)
    {
      cin>>age[j];
         p=n/2;
    }
    printf ("Case %d: %d\n",i,age[p]);
  }
  return 0;
}
