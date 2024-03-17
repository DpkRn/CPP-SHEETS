 #include<bits/stdc++.h>
 using namespace std;
 
 void solve(){
     int n;
     cin>>n;
     int arr[n];
     for(auto &it:arr){
        cin>>it;
     }
     
     for(int i=0;i<n;i++){
        if(arr[0]>arr[i]){
            cout<<"No"<<endl; return ;
        }
     }
     cout<<"Yes"<<endl;
 }
 
 int main(){
     int t;
     cin>>t;
     int i=0;
     while(t--){
         i++;
        // cout<<"case #"<<i<<":";
         solve();
     }
 return 0;
 }