 #include<bits/stdc++.h>
 using namespace std;
 
 void solve(){
     int n;
     cin>>n;
     int arr[n];
     for(auto &it:arr) cin>>it;
     int first=-1;
     int second=-1;
     int third=-1;
     
      for(int i=0;i<n;i++){
        if(first==-1){
            first=arr[i];
        }else if(second==-1&&arr[i]!=first){
            second=arr[i];
        }else if(arr[i]!=first&&arr[i]!=second){
            third=arr[i];
        }
         if(third!=-1){
            cout<<"No"<<endl; return ;
        }
     }
    
     int a=0; int b=0;
     for(auto it:arr){
        if(it==first){
            a++;
        }else b++;
     }
     if(b==0||abs(a-b)<=1) cout<<"Yes"<<endl;
     else cout<<"No"<<endl;
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