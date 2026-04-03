#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long>a(n);
    for(auto&x:a)cin>>x;
    sort(a.begin(),a.end());
    long long ans=max({a[0]*a[1], a[n-2]*a[n-1], a[0]*a[1]*a[n-1], a[n-3]*a[n-2]*a[n-1]});
    cout<<ans;
}
