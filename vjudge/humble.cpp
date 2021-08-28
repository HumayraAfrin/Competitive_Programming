#include<bits/stdc++.h>
using namespace std;
int main()
{
    int pos2=0,pos3=0,pos5=0,pos7=0,n,i;
    long long int humble[6000];
    humble[0]=1;
    for(i=1;i<5843;i++)
    {
        humble[i]=min(min(2*humble[pos2],3*humble[pos3]),min(5*humble[pos5],7*humble[pos7]));
        if(humble[i]==2*humble[pos2])
            pos2++;
        if(humble[i]==3*humble[pos3])
            pos3++;
        if (humble[i]==5*humble[pos5])
            pos5++;
        if(humble[i]==7*humble[pos7])
            pos7++;
    }
    cin >> n;
    while(n!=0)
    {

        cout <<"The " << n;
         if(n%10==1 && (n/10)%10!=1)
            printf("st");
        else if(n%10==2 && (n/10)%10!=1)
            printf("nd");
        else if(n%10==3 && (n/10)%10!=1)
            printf("rd");
        else
            printf("th");
        cout << " humble number is "<<humble[n-1] << "."<< endl;
         cin >> n;
    }
return 0;
}
