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
        ll maxi=INT_MIN;
        ll sum=0;
        for(ll i=0; i<n; i++){
            sum+=v[i];
            maxi=max(maxi,sum);
            if(sum<0){
                sum=0;
            }
        }
        cout<<maxi<<'\n';
    }
}