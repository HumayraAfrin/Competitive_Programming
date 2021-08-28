#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s)
{
  int rem=0,len=s.size(),k=0;
  for(int i=len-1;i>=0; i--)
  {
    if(s[i]=='1')
      rem+=pow(2,k);
    k++;
  }
  return rem;
}

int GCD(int a, int b)
{
  if(b>a)
    return GCD(b,a);
  if(b==0)
    return a;
  else
    return GCD(b, a%b);
}

int main()

{
  int n,x,y,c=1,gcd;
  string s1,s2;
  cin>>n;
  while(c<=n)
  {
    cin>>s1>>s2;

    x= binaryToDecimal(s1);
    y= binaryToDecimal(s2);

     gcd=GCD(x,y);

     if(gcd != 1)
        printf("Pair #%d: All you need is love!\n",c);
     else
      printf("Pair #%d: Love is not all you need!\n",c);
      c++;
  }

  return 0;
}
