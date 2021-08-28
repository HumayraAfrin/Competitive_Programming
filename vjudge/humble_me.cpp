#include<bits/stdc++.h>
using namespace std;
int main()
{
  int humble[5843];
  int a=0,b=0,c=0,d=0,num;
  humble[0]=1;

  for(int i=1; i<5842; i++)
  {
      humble[i]=min(min(2*humble[a],3*humble[b]),min(5*humble[c],7*humble[d]));

        if(humble[i]==2*humble[a])
            a++;
        if(humble[i]==3*humble[b])
            b++;
        if (humble[i]==5*humble[c])
            c++;
        if(humble[i]==7*humble[d])
            d++;
  }
  while(cin>>num)
  {
    if(num==0)
      break;
    if(num%10 ==1 && (num/10)%10!=1)
      cout<<"The "<<num<<"st humble number is "<<humble[num-1] << "."<< endl;
    else if(num%10 ==2 && (num/10)%10!=1)
       cout<<"The "<<num<<"nd humble number is "<<humble[num-1] << "."<< endl;
    else if(num%10 ==3 && (num/10)%10!=1)
       cout<<"The "<<num<<"rd humble number is "<<humble[num-1] << "."<< endl;
    else
        cout<<"The "<<num<<"th humble number is "<<humble[num-1] << "."<< endl;
  }
  return 0;
}
