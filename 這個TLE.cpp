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

int main()    //    https://zerojudge.tw/ShowProblem?problemid=f607
{
    ll n, m, ans=0;
    cin >> n >> m;
    vector <pair <ll, ll>> cut(n);
    set <ll> data = {0, m};
    f2(i, n)    cin >> cut[i].second >> cut[i].first;
    sort(&cut[0], &cut[n]);
    for(auto i : cut)
    {
        auto r = upper_bound(begin(data), end(data), i.second);
        bool flag = 1;
        for(auto ptr=r; ptr!=begin(data); ptr--)
        {
            if(*ptr<i.second)
            {
                ans+=*r-*ptr;
                data.insert(i.second);
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            ans+=*r-*begin(data);
            data.insert(i.second);
        }
    }
    cout << ans;
}