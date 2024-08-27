#include<bits/stdc++.h>
#define f2(i, m) for(long long i=0; i<m; i++)
#define f3(i, n, m) for(long long i=n; i<m; i++)
#define ll long long
#define pb push_back
#define pob pop_back
#define len length()
#define elif else if
#define mod 1000000007
#define debug
/*
#ifdef debug
#endif
#ifndef debug
#endif
*/
using namespace std;

ll re(ll l, ll r, auto &dp, auto &data)
{
    if(dp[l][r]!=LONG_LONG_MAX)    return dp[l][r];
    dp[l][r] = max((data[l]-re(l+1, r, dp, data)), (data[r]-re(l, r-1, dp, data)));
    return dp[l][r];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, sum=0;
    cin >> n;
    vector <vector <ll>> dp(n, vector <ll> (n, LONG_LONG_MAX));
    vector <ll> data(n);
    f2(i, n)
    {
        cin >> data[i];
        sum+=data[i];
    }
    f2(i, n-1)    dp[i][i+1] = abs(data[i+1]-data[i]);
    dp[0][0]=data[0];
    cout << (sum-re(0, n-1, dp, data))/2+dp[0][n-1];
    return 0;
}