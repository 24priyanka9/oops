#include<bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int add(int,int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);
int main(){
     
     int a,b;
     cout<<"Enter any two number:";
     cin>>a>>b;
     cout<<"\nSummation = "<<add(a,b);
     cout<<"\nsubtraction = "<<subtract(a,b);
     cout<<"\nMultiplication = "<<multiply(a,b);
     cout<<"\nDivision = "<<divide(a,b);
     getch();
     return 0;
}
int add(int x,int y){
    int res;
    res = x+y;
    return res;
}
int subtract(int x,int y){
    int res;
    res = x-y;
    return res;
}
int multiplication(int x,int y){
    int res;
    res = x*y;
    return res;
}
int divide(int x,int y){
    if(y==0)
    {
        cout<<"\n\nDivide by zero Error..!!";
        cout<<"\nPress any key to exit...";
        
    
    }
    else{
        int res;
        res = x/y;
        return res;
    }
    }