#include<bits/stdc++.h>
using namespace std;
int main(){
    int basic_salary,DA,HRA;
    cin>>basic_salary;
    if(basic_salary<=10000){
        HRA=basic_salary*20/100;
        DA=basic_salary*80/100;
        cout<<basic_salary+HRA+DA;
    }
    else if(basic_salary<=20000){
        HRA=basic_salary*25/100;
        DA=basic_salary*90/100;
        cout<<basic_salary+HRA+DA;
    }
    else if(basic_salary>20000){
        HRA=basic_salary*30/100;
        DA=basic_salary*95/100;
        cout<<basic_salary+HRA+DA;
    }
    return 0;
}