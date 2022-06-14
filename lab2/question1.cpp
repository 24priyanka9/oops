#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c>64 && c<90){
        cout<<"Entered character is capital letters"<<endl;
    }
    else if(c>96 && c<123){
        cout<<"Entered character is smalll letters"<<endl;
    }
    else if((c>32 && c<48) || (c>57 && c<65) || (c>90 && c<96) || (c>122 && c<127)){
        cout<<"Entered character is special character"<<endl;
    }
    else {
        cout<<"Entere characte is neither alphabetical letters not special character"<<endl;
    }
    return 0;
}