#include<bits/stdc++.h>
using namespace std;
int I=10;
int main(){
    int I=20;
    cout<<endl<<I<<"\t"<<::I<<endl;
    {
        int I=30;
        cout<<endl<<I<<"\t"<<::I<<endl;
    }
    cout<<endl<<I<<"\t"<<::I<<endl;
    return 0;
}