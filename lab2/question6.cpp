#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    re_enter:
    cin>>n;
    if(n/10==0){
        cout<<"Re enter the value"<<endl;
        goto re_enter;
    }
    else{
       if(n%2==0){
        cout<<"number is even"<<endl;
       }
       else{
        cout<<"number is odd"<<endl;
       }
    }

    return 0;
}