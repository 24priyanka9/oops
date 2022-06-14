#include<bits/stdc++.h>
using namespace std;
 float farenheit_to_celsius(float f){
     float c=(f-32.0)*5.0/9.0;
     return c;

 }
int main(){
    float f;
    cin>>f;
    cout<<farenheit_to_celsius(f)<<endl;
    return 0;
}