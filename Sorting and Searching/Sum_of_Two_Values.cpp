#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1;
    while(t--){
        ll n,x;
        cin>>n>>x;
        map<ll,ll>mpp;
        ll i1=-1, i2=-1;
        for(ll i=0; i<n; i++){
            ll j;
            cin>>j;
            if(mpp.find(x-j)!=mpp.end()){
                i1=min(i+1,mpp[x-j]);
                i2=max(i+1,mpp[x-j]);
            }
            mpp[j]=i+1;
        }
        if(i1!=-1 && i2!=-1){
            cout<<i1<<" "<<i2;
        }
        else{
            cout<<"IMPOSSIBLE"<<'\n';
        }
        
    }
}