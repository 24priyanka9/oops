#include<bits/stdc++.h>
using namespace std;
struct st{
    static int x,y;
    static void print(){
        cout<<x<<","<<y<<endl;
    }
};
int st::x;
int st::y;
int main(){
    st s;
    st::x=10;
    st::y=20;
    st s1;
    st::x=22;
    st::y=33;
    st::print();
    st::print();
    return 0;
}