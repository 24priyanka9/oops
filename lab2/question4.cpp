#include<bits/stdc++.h>
using namespace std;
int main(){
     float angleA,angleB,angleC;
     cin>>angleA>>angleB>>angleC;
     if(angleA+angleB+angleC==180){
        cout<<"Triangle is valid"<<endl;
     }
     else{
        cout<<"Triangle is not valid"<<endl;
     }
    return 0;
}