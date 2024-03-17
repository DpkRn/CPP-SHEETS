#include<bits/stdc++.h>
using namespace std;

void solve(){
     int n;
     cin>>n;
     if(n%3==0) cout<<"Second"<<endl;
     else cout<<"First"<<endl;
}

int main(){
    int t;
    cin>>t;
    int i=0;
    while(t--){
        i++;
        //cout<<"case #"<<i<<":";
        solve();
    }
return 0;
}