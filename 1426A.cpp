#include<bits/stdc++.h>
#define N  "NO\n"
#define Y "YES\n"
#define ll long long
#define ld long double
#define w(t) long long t ; cin>>t ; while(t--)
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fi(itr,v) for(auto itr=v.begin();itr!=v.end();itr++)
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    IOS
    w(t){
        ll n,x;
        cin>>n>>x;
        ll temp=(n-2)/x;
        if(n==1||n==2)
        cout<<1<<endl;
        else{   
            if((n-2)%x!=0)
            cout<<temp+2<<endl;
            else
            cout<<temp+1<<endl;
        }
    }
    return 0;
}
