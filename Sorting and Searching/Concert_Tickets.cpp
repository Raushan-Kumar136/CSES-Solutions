#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1;
    while(t--){
        ll n,m;
        cin>>n>>m;
        multiset<ll>prices;
        vector<ll>v2(m);
        for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            prices.insert(x);
        }
        for(ll i=0; i<m; i++){
            cin>>v2[i];
        }
        for(ll i=0; i<m; i++){
            auto it=prices.upper_bound(v2[i]);
            if(it==prices.begin()){
                cout<<-1<<'\n';
             
            }
            else{
                it--;
                cout<<*it<<'\n';
                prices.erase(it);
            }
            
        }
    }
}