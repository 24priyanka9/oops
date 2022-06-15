#include<bits/stdc++.h>
using namespace std;
class A{
    private:
    int i;
    public:
    A(){
        cout<<endl<<"Inside the constructor"<<endl;
    }
    ~A(){
        cout<<endl<<"Inside the Destructor"<<endl;
    }
};
int main(){
    A a;
    return 0;
}