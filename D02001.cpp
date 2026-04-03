#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t,n,i;cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++) cout<<a[i]<<" \n"[i==n-1];
    }
}
