#include<bits/stdc++.h>
using namespace std;
class one{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
};
class two: public one {
    public:
    void function(){
        int z;
        z=a;
        z=b;
        z=c;
    }
};
class three: private one {
    public:
    void function2(){
        int y;
        y=a;
        y=b;
        y=c;
    }
};
int main(){
    int x;
    two second;
    second.function();
    //x=second.b;
   // x=second.c;
    three third;
   // x=third.a;
    //x=third.b;
   // x=third.c;
}