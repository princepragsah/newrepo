#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define ll long long
#define ld long double
ll const N=1e6+5;
ll const INF=8223372036854775807;
 
#define pb push_back
#define popb pop_back()
#define pf push_front
#define popf pop_front()
#define si size()
#define be begin()
#define en end()
#define all(v) v.be, v.en
#define len length()
#define mp make_pair
#define mt make_tuple
#define umap unordered_map
#define uset unordered_set
#define acc(v) accumulate(all(v), 0)
#define F first
#define S second

 
#define forz(i, n) for (ll i = 0; i < n; i++)
#define fore(i, m, n) for (ll i = m; i <= n; i++)
#define rforz(i, n) for (ll i = n - 1; i >= 0; i--)
#define rfore(i, m, n) for (ll i = n; i >= m; i--)
#define deci(n) fixed << setprecision(n)
#define high(n) __builtin_popcount(n)
#define highll(n) __builtin_popcountll(n)
#define parity(n) __builtin_parity(n)
#define ctz(n) __builtin_ctz(n)
#define lb lower_bound
#define ub upper_bound
#define er equal_range
#define maxe *max_element
#define mine *min_element
#define mod 1000000007
#define mod2 998244353
#define PI 3.1415926535
#define gcd __gcd
#define prag ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
#define endl "\n"
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a, b) cout << a << " " << b << endl
#define p3(a, b, c) cout << a << " " << b << " " << c << endl
#define p4(a, b, c, d) cout << a << " " << b << " " << c << " " << d << endl

typedef pair<ll,ll> pll;
typedef pair<pll,ll> plll;





 
// GRAPHS
vector<ll> adj[N];

ll depth[N],sizz[N];
bool visited[N];
// ll clr[N];


 
void bfs(ll s,ll p){
    sizz[s]=1;
    visited[s]=true;
   
    for(auto x:adj[s]){
        if(x==p){
            continue;
        }
            
            if(visited[x]==false)
            {
            
            depth[x]=depth[s]+1;
            bfs(x,s);
            sizz[s]=sizz[s]+sizz[x];

            }
           
        
    }
}


bool checkPrime(ll x)
{
    if (x == 1)
    {
        return false;
    }
    if (x <= 3)
    {
        return true;
    }
    ll t = 2;
    if (x % 2 == 0)
    {
        return false;
    }
    t = 3;
    for (t; t <= sqrt(x); t += 2)
    {
        if (x % t == 0)
        {
            return false;
        }
    }
    return true;
}



/// used for internal sorting in minpriority queue
template <class pll> struct greatter : binary_function <pll,pll,bool> {
  bool operator() (const pll& p1, const pll& p2) const 
  {
    if(p2.S-p2.F>p1.S-p1.F) return true;
    else if(p2.S-p2.F==p1.S-p1.F)
    { 
        if(p1.F>p2.F)  return true;
        else return false;
    }
    else return false;
  }
};

ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;      
    x = x % p;  
  
    while (y > 0) 
    { 
       
        if (y & 1) 
            res = (res*x) % p; 
  
        
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 
}

ll modInverse(ll n, ll p) 
{ 
    return power(n, p-2, p); 
} 

ll nCrModPFermat(ll n, ll r, ll p) 
{ 
   
   if (r==0) 
      return 1; 
  
    
    ll fac[n+1]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n] % p * modInverse(fac[r], p) % p* modInverse(fac[n-r], p) % p) % p; 
}


ll dp[3605][8005];
ll countsubsets(vector<ll> arr,ll ss, ll i,ll remsum)
{
   if(i==ss) 
   {
       if(remsum==0) return 1;
       else return 0;
   }

   if(dp[i][remsum]!=-1) return dp[i][remsum];
   else
   {
       dp[i][remsum]=countsubsets(arr,ss,i+1,remsum)+countsubsets(arr,ss,i+1,remsum-arr[i]);
       return  dp[i][remsum];
   }
   

}



int main()
{
  prag;
  ll T=0,bans=0;
  cin>>T;
 
  while (T--) 
  {
    

    forz(i,3605) forz(j,8005) dp[i][j]=-1;

    ll sum,k;
    cin>>sum>>k;

    vector<ll> L,D;
    forz(i,k) 
    {
        ll v;
        cin>>v;
        L.pb(v);
    }


    ll cnt=0;
    forz(i,k)
    {
        ll s;
        cin>>s;
        if(sum%L[i]==0 && sum/L[i]<s) cnt++;

        //forz(j,s) D.pb(L[i]);
    }

    cout<<cnt+countsubsets(L,L.si,0,sum)<<endl;





 
  }

}

  

