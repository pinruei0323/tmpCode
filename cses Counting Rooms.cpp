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

void dfs(ll a, ll b, auto &data, auto &visited, ll &ans)
{
    if(visited[a][b]==0 && data[a][b]=='.')
    {
        
    }
    
}

int main()
{
    ll n, m, ans=0;
    vector <vector <char>> data(n, m);
    vector <vector <bool>> visited(n, vector <bool> (m));
    f2(i, n)
        f2(j, m)    cin >> data[i][j];
    f2(i, n)
    {
        f2(j, m)    dfs(0, 0, data, visited, ans);
    cout << ans;
}