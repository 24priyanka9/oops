#include<bits/stdc++.h>
using namespace std;
int main(){
    int*p1;
    p1=new int;
    *p1=1000;
    int*p2=new int(2000);
    cout<<"The first value is:"<<*p1<<endl;
    cout<<"The second value is:"<<*p2<<endl;
    delete p1;
    delete p2;
    return 0;
}