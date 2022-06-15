#include<bits/stdc++.h>
using namespace std;
int main(){
    union{
        short int count;
        char ch[2];
    };
    ch[0]='x';
    ch[1]='y';
    cout<<"union as chars: "<<ch[0]<<ch[1]<<'\n';
    cout<<"union as integer: "<< count <<'\n';
    return 0;
}