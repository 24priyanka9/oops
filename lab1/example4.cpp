#include<bits/stdc++.h>
using namespace std;
union book{
    int sr;
    char name[20];
    float price;
};
int main(){
    book b;
    cout<<"Enter Serial No.:";
    cin>>b.sr;
    cout<<"Enter Book Name : ";
    gets(b.name);
    cout<<"Enter Book Price: ";
    cin>>b.price;
    cout<<"\nSerial No.:"<<b.sr;
    cout<<"\nBook Name : "<<b.name;
    cout<<"\nBook price : "<<b.price;
    
    return 0;
}