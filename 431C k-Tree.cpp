//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};





ll n, k, d;
ll dp[105][3];

ll solve(ll sum, ll chk)
{
    if(sum==n)
    {
        if(chk)return 1;
        else return 0;
    }

    if(sum>n)return 0;

    if( dp[sum][chk]!=-1)return dp[sum][chk];

    ll ans=0;
    fr1(i, k)
    {
        if(chk==1 or i>=d)ans=(ans + ( solve(sum+i, 1) ) )%md;
        else ans=(ans + ( solve(sum+i, chk) ))%md;
    }

    return dp[sum][chk]=ans;

}
int main()
{
    fast;
    ll t;
   // cin>>t;
    //tcas(cs, t)
    //{
    ll i,j;
    mem(dp, -1);
    cin>>n>>k>>d;
    ll ans=solve(0, 0);
    cout<<ans<<endl;
    //}

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

