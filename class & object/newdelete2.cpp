#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p=new int[5];
    cout<<"Enter the values of the array:"<<endl;
    for(int i=0;i<5;i++){
        cin>>p[i];
    }
    cout<<"The elements of the array are:"<<endl;
    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    }
    delete p;
    return 0;
}