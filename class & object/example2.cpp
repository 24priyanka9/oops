#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int i;
    public:
    void getdata(){
        cout<<endl<<"enter any integer";
        cin>>i;
    }
    void setdata(int j){
        i=j;
    }
    A(){
    }
    A(int j){
        i=j;
    }
    void display(){
        cout<<endl<<"value of i="<<i<<endl;
    }
};
int main(){
    A a1(100),a2,a3;
    a1.display();
    a2.setdata(200);
    a2.display();
    a3.getdata();
    a3.display();
    return 0;
}