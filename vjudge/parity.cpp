#include<bits/stdc++.h>
using namespace std;

int main()
{
  int num,bin[1000],i,c;
  while(cin>>num)
  {
    if(num==0)
      break;
    c=0; i=0;
  while(num>0)
  {
    bin[i]=num%2;
    num=num/2;
    i++;
  }
  cout<<"The parity of ";
  for(i=i-1; i>=0; i--)
  {
    cout<<bin[i];
    if (bin[i]==1)
      c++;
  }

    printf(" is %d (mod 2).\n",c);
  }
  return 0;
}
