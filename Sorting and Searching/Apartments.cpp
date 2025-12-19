#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t=1;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>v1(n);
        vector<ll>v2(m);
        for(ll i=0; i<n; i++){
            cin>>v1[i];
        }
        for(ll i=0; i<n; i++){
            cin>>v2[i];
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        ll i=0,j=0,cnt=0;
        while(i<n && j<m){
            if(v2[j]<v1[i]-k){
                j++;
            }
            else if(v2[j]>v1[i]+k){
                i++;
            }
            else{
                cnt++;
                i++;
                j++;
            }
        }
        cout<<cnt<<'\n';
    }
}