#include<bits/stdc++.h>
using namespace std;
int main(){
    int hour,minute;
    cin>>hour>>minute;
    if(hour>24){
        hour=hour-24;
    }
    else{ 
    if(hour>=12){
        cout<<"It's PM"<<endl;
    }
    
    else{
        cout<<"It's AM"<<endl;
    }}
    return 0;
}