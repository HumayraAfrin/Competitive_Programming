#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,h,c,x,seq=0,value=0,temp;
    while(scanf("%lld %lld", &l, &h)!=EOF)
    {
        if(l>h)
        {
            temp=l;
            l=h;
            h=temp;
        }
        if(l==0 && h==0)
            break;
        seq = 0;
        for(int i=l; i<=h; i++)
        {
            x=i;
            c=0;
            while(x!=0)
            {
                c++;
                if(x%2==0)
                    x=x/2;
                else
                    x=(3*x)+1;
                if(x==1)
                    break;
            }

            if(c>seq)
            {
                seq=c;
                value=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,h,value,seq);
    }
    return 0;
}
