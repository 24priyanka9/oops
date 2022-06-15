#include<bits/stdc++.h>
using namespace std;
struct st{
    int a,b;
    void display(){
        cout<<a<<","<<b<<endl;
    }
};
int main(){
    st*s=new st;
    s->a=10;
    s->b=40;
    s->display();
    delete s;
}