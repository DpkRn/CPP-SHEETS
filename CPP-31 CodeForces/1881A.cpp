 #include<bits/stdc++.h>
 using namespace std;
 
 void solve(){
     int x, s;
     cin>>x>>s;
     string str1,str2;
     cin>>str1>>str2;
     int i=0;
     while(x<s){
        x*=2;
        str1+=str1;
        i++;
     }
      if(str1.find(str2)!=-1){
            cout<<i<<endl;   //aa aa aaaa
      }else{
        str1=str1+str1;
        if(str1.find(str2)!=-1){
            cout<<i+1<<endl;
        }else {
            cout<<-1<<endl;
        }
      }
      
     
 }
 
 int main(){
     int t;
     cin>>t;
     int i=0;
     while(t--){
         i++;
        // cout<<"case #"<<i<<":";
         solve();
         //cout<<endl;
     }
 return 0;
 }