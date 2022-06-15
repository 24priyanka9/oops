#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
    char name[20];
    int age;
    float sal;
    public:
    employee(){
        cout<<endl<<"Reached the zero-argument constructor";
        strcpy(name,"");
        age=0.0;
        sal=0.0;
    }
    employee(char *n,int a,float s){
        cout<<endl<<"Reached the three argument constructor";
        strcpy(name,n);
        age=a;
        sal=s;
    }
    void setdata(char *n,int a,float s){
        strcpy(name,n);
        age = a;
        sal = s;
    }
    void showdata(){
        cout<<endl<<name<<"\t"<<age<<"\t"<<sal;
    }
    ~employee(){
        cout<<endl<<"Reached the destructor"<<endl;
    }
    
};
int main(){
    employee *p;
    p=new employee;
    p->setdata("Ram",23,4500.50);
    employee*q;
    q=new employee("Bharavt",24,3400.60);
    p->showdata();
    q->showdata();
    delete p;
    delete q;
    return 0;
}