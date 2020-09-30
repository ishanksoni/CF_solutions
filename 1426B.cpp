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
// bool checkTile(vector<vector<ll>> array[2][2]){
//     bool temp;
//     f(i,0,2){
//         f(j,0,2){
//             if(array[i][j]==array[j][i])
//             temp=1;
//             else{
//             temp=0;
//             break;
//             }
//         }
//     }
//     return temp;
// }
bool checkTiles(vector<vector<vector<ll>>> vector){ 
 
    f(i,0,vector.size()){
        bool temp;
        f(j,0,2){
            f(k,0,2){
            if(vector[i][j][k]==vector[i][k][j])
            temp=1;
            else 
            temp=0;
            break;
            }
        }
        if(temp)
        return 1;
    }
    return 0;
}
int main(){
    IOS
    w(t){
        ll n,m;
        cin>>n>>m;
        vector<vector<vector<ll>>> tiles;
        f(i,0,n){
            vector<vector<ll>> matrix;
            f(j,0,2){
                vector<ll> line;
                f(k,0,2){
                    ll x;cin>>x;
                    line.push_back(x);
                }
                matrix.push_back(line);
            }
            tiles.push_back(matrix);
        }
        if(m%2!=0)
        cout<<N;
        else{
            if(checkTiles(tiles))
            cout<<Y;
            else
            cout<<N;
        }
    }
    return 0;
}
