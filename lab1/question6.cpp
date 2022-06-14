#include<bits/stdc++.h>
using namespace std;
struct customers{
    string name;
    long long int account_no;
    int bank_balance;
};
void balance_less_than(customers* ct,int n){
    cout<<"Name of those customers whose account balance is less than $200: "<<endl;
    for(int i=0;i<n;i++){
        if(ct[i].bank_balance<200){
            cout<<ct[i].name<<endl;
        }
    }
}
void balance_greater_than(customers *ct,int n){

    for(int i=0;i<n;i++){
       if(ct[i].bank_balance>1000){
        ct[i].bank_balance=ct[i].bank_balance+100;
        cout<<"updated account balance: "<<endl;
        cout<<ct[i].bank_balance<<endl;
       }
    }
    }
int main(){
    int n;
    cin>>n;
    customers ct[n];
    for(int i=0;i<n;i++){
        cin>>ct[i].name;
        cin>>ct[i].account_no;
        cin>>ct[i].bank_balance;
    }
    //balance_less_than(ct,n);
    balance_greater_than(ct,n);

    
}