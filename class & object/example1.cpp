#include<bits/stdc++.h>
using namespace std;
class rectangle{
    private:
    int len,br;
    public:
    void getdata(){
        cout<<endl<<"Enter the length and the breadth";
        cin>>len>>br;
    }
    void setdata(int l,int b){
       len=l;
       br=b;
    }
    void displaydata(){
        cout<<endl<<"length="<<len;
        cout<<endl<<"breadth="<<br;
    }
    void area(){
        int a;
        a=len*br;
        cout<<endl<<"Area="<<a;
    }
};
int main(){
    rectangle R1,R2;
    R1.setdata(10,20);
    R1.displaydata();
    R1.area();
    R2.getdata();
    R2.displaydata();
    R2.area();
    return 0;
}