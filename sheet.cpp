#include<bits/stdc++.h>
using namespace std;
 
int main(){
       int a,b;
       cin>>a>>b;
       cout<<"floor "<<a<<" / "<<b<<" = "<<a/b<<endl;
       if(a%b==0){
       cout<<"ceil "<<a<<" / "<<b<<" = "<<a/b<<endl;
       }
       else{
        cout<<"ceil "<<a<<" / "<<b<<" = "<<(a/b)+1<<endl;
       }
        float c=a*1.0/b*1.0;
       int d=a/b;
       if(c-d>=0.5){
         cout<<"round "<<a<<" / "<<b<<" = "<<(a/b)+1<<endl;
       }
       else{
          cout<<"round "<<a<<" / "<<b<<" = "<<a/b<<endl;
       }
    return 0;
}