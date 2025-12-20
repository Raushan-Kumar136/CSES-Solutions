#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n),lea(n);
        for(ll i=0; i<n; i++){
            ll a,b;
            cin>>a>>b;
            arr[i]=a;
            lea[i]=b;
        }
        sort(arr.begin(),arr.end());
        sort(lea.begin(),lea.end());
        ll maxi=INT_MIN;
        for(ll i=0; i<n; i++){
            ll ptr=upper_bound(lea.begin(),lea.end(),arr[i])-lea.begin();
            maxi=max(maxi,i+1-ptr);
        }
        cout<<maxi<<'\n';
    }
}