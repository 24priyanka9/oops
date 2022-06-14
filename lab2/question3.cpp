#include<bits/stdc++.h>
using namespace std;
int main(){
    float unit,electricity_bill;
    cin>>unit;
    if(unit<50){
        electricity_bill=0.50*unit;
        cout<<"electricity bill: "<<electricity_bill<<"rupees"<<endl;
    }
    else if(unit>50 && unit<150){
        unit=unit-50;
        electricity_bill=0.50*50+unit*0.75;
        cout<<"electricity bill: "<<electricity_bill<<"rupees"<<endl;
    }
    else if(unit>150 && unit<250){
        unit=unit-150;
        electricity_bill=0.50*50+0.75*100+unit*1.20;
        cout<<"electricity bill: "<<electricity_bill<<"rupees"<<endl;
    }
    else if(unit>250){
        unit=unit-250;
        electricity_bill=0.50*50+0.75*100+100*1.20+unit*1.50;
        cout<<"electricity bill:"<<electricity_bill+electricity_bill*20/100<<"rupees"<<endl;
    }
    return 0;
}