#include<bits/stdc++.h>
using namespace std;
#define ll                        long long
#define ull                       unsigned long long
#define vi                        vector<ll int>
#define pb                        push_back
#define f(i,a,b)                  for(ll int i = a; i<b; ++i)
#define PI 3.141592653589793238
int main()
{
  ll t; cin>>t;
  while(t--)
  {
    ll a,b; cin>>a>>b;
    ll val = abs(b-a);
    ll ans = 0;
    ans+=val/10;
    if(val%10!=0)
    ans++;
    cout<<ans<<endl;
  }
  return 0;
}
