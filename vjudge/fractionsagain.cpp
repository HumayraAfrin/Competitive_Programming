#include<bits/stdc++.h>
using namespace std;

int main()
{
   int y,k,cnt;
   while(cin>>k)
   {
     cnt=0;
     for(y=k+1; y<= 2*k; y++)
      if ((y*k)%(y-k)==0)
      cnt++;
     cout<<cnt<<endl;

      for(y=k+1; y<= 2*k; y++)
      if ((y*k)%(y-k)==0)
        cout<<"1/"<<k<<" = 1/"<<(y*k)/(y-k)<<" + 1/"<<y<<endl;
   }
   return 0;
}
