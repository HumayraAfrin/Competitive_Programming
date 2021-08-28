#include<bits/stdc++.h>
using namespace std;

long fact(int num)
{
    if(num == 0) return 1;
    return num * fact(num - 1);
}

long nCr(int num,int r)
{
    long val1 = fact(num);
    long val2 = fact(r);
    long val3 = fact(num-r);
    return val1/(val2*val3);
}

long derange(int num)
{

    if (num == 0) return 1;
    if (num == 1) return 0;
    return (num - 1) * (derange(num - 1) + derange(num - 2));
}

int main()
{
    int  n,m;
    long invit;
    while(cin>>n>>m)
    {
        invit=0;
        invit+=derange(n);
        for(int i=1;i<=m;i++)
            invit+=nCr(n,i)*derange(n-i);
        cout<<invit<<endl;
    }
}

