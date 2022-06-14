#include<bits/stdc++.h>
using namespace std;
struct dates{
    int date,month,year; 
};
void compare(dates *d,int n){
    if(d[0].date==d[1].date && d[0].month==d[1].month && d[0].year==d[1].year){
        cout<<"Dates are equal"<<endl;
            }
            else{
        cout<<"Dates are not equal"<<endl;
    }
        
    
}
int main(){
    dates d[2];
    for(int i=0;i<2;i++){
        cin>>d[i].date>>d[i].month>>d[i].year;
    }
    
compare(d,2);
    return 0;
}