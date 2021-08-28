#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
  if (n==1)
    return 1;
  else
    return (josephus(n-1, k) + k - 1) % n + 1;
}
int main()
{
  int t,n;
  cin>>t;
  for(int i=1; i<=t; i++)
  {
    int k=2,cnt=0;
    cin>>n;
    int surviver=josephus(n,k);
    while(surviver!=n)
    {
      cnt++;
      n=surviver;
      surviver=josephus(n,k);
    }
   printf("Case %d: %d %d\n",i,cnt,surviver);
  }
  return 0;
}
