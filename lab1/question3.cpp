#include<bits/stdc++.h>
using namespace std;
struct distances{
    int inch;
    int feet;
    //feet=12*inch;
};
int main(){
    distances d;
    cin>>d.inch>>d.feet;
    int sum;
    sum=d.inch+12*d.feet;
    cout<<sum<<endl;

    return 0;
}