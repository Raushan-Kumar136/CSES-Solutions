#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>>v;
        for(ll i=0; i<n; i++){
            ll a,b;
            cin>>a>>b;
            v.push_back({b,a});       
        }
        sort(v.begin(),v.end());
        ll prev=v[0].first;
        ll cnt=1;
        for(ll i=1; i<n; i++){
            if(v[i].second>=prev){
                cnt++;
                prev=v[i].first;
            }
        }
        cout<<cnt<<'\n';
    }
}