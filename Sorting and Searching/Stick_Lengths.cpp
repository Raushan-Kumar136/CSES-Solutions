#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1]){
            cout<<0<<'\n';
        }
        else{
            ll ind=n/2;
            ll cost=0;
            for(ll i=0; i<n; i++){
                cost+=abs(v[i]-v[ind]);
            }
            cout<<cost<<'\n';
        }
    }
}