#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            if(i==2 && j==2){
                break;
            }
            cout<<i<<"\t"<<j<<"\n";
        }
    }
    return 0;
}