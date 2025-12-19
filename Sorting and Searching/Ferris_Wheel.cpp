#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll i=0, j=n-1;
        ll cnt=0;
        while(i<=j){
            if(v[i]+v[j]<=x && i!=j){
                i++;
                j--;
            }
            else{
                j--;
            }
            cnt++;
        }
        cout<<cnt<<'\n';
    }
}