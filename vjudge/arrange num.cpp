    #include <bits/stdc++.h>
    #define MOD 1000000007
    #define SHOW printf("Case %d: %ld\n",j,((ans*ans1)%MOD));
    using namespace std;

    long fact[1005];

    long dp[1005][1005];
    long nCr(int n, int k) {
          if (k == 0 || n == k) return 1;
          if (dp[n][k] == -1)
            dp[n][k] = (nCr(n - 1, k) + nCr(n - 1, k - 1)) % MOD;
          return dp[n][k];
    }
    int main()
    {
        int t,j=0;
        cin>>t;
        fact[0]=1;
        for(int i=1; i<1002; i++) fact[i]=(fact[i-1]*i)%MOD;
        while(j<=t)
        {
            long n,m,k;
            cin>>n>>m>>k;
            int a,b;
            a=n-k, b=m-k;
            memset(dp,-1, sizeof dp);
            long ans=nCr(m,k);
            long ans1=fact[a];
            for(int i=1; i<=b; i++)
            {
                if(i%2==1)
                    ans1-= (nCr(b,i)*fact[a-i])%MOD;
                else
                    ans1+= (nCr(b,i)*fact[a-i])%MOD;
                ans1=(ans1+MOD)%MOD;
            }
            SHOW;
        }
        return 0;
    }
