 #include<bits/stdc++.h>
 using namespace std;
 
 void solve(){
     int n;
     cin>>n;
     char arr[n];
     for(auto &it:arr){
        cin>>it;
     }
     int cnt=0;
     int tot=0;
     for(auto it:arr){
        if(it=='.'){
            cnt++;
            if(cnt>=3){
                cout<<2<<endl; return;
            }
        }else{
            tot+=cnt;
            cnt=0;
        }
        
     }
     tot+=cnt;
     cout<<tot<<endl;
 }
 
 int main(){
     int t;
     cin>>t;
     while(t--){
         solve();
     }
 return 0;
 }