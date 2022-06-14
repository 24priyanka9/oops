#include<bits/stdc++.h>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%4==0){
        cout<<"Given year is a leap year"<<endl;
    }
    else{
        cout<<"It is not a leap year"<<endl;
    }
    return 0;
}