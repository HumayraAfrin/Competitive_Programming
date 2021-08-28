#include<bits/stdc++.h>
using namespace std;

int main()
{
  int G,L,t;
  cin>>t;
  while(t--)
  {
    cin>>G>>L;
     if(L%G == 0)
    cout<<G<<" "<<L<<endl;
  else
    cout<<"-1"<<endl;
  }
 return 0;
}
