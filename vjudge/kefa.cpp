#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,cnt=1,total=0;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++)
    cin>>a[i];
   for(int i=1; i<n; i++)
    {
    if(a[i]>=a[i-1])
       cnt++;
    else
    {
      if(cnt>total)
        total=cnt;
        cnt=1;
    }
   }
   if(cnt>total)
        total=cnt;
    cout<<total<<endl;
 return 0;
}
