 #include<bits/stdc++.h>
 using namespace std;
 
 void solve(){
     int n,k;
     cin>>n>>k;
     int arr[n];
     for(auto &it:arr)
     cin>>it;
     if(k==1&&!is_sorted(arr,arr+n)){
        cout<<"NO"<<endl; return ;
     }
    cout<<"YES"<<endl;
 }
 
 int main(){
     int t;
     cin>>t;
     int i=0;
     while(t--){
       // cout<<"CASE #"<<i<<" : ";
         solve();
     }
 return 0;
 }