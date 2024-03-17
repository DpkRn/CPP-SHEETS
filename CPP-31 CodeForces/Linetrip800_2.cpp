#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> gasStation(n);
    for(auto &it:gasStation){
        cin>>it;
    }
    int maxi=INT_MIN;
    maxi=max(maxi,gasStation[0]);
    for(int i=1;i<n;i++){
        maxi=max(maxi,gasStation[i]-gasStation[i-1]);
    }
    maxi=max(maxi,2*(x-gasStation[n-1]));
    cout<<maxi<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
return 0;
}