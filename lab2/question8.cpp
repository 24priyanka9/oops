#include<bits/stdc++.h>
using namespace std;
int main(){
    float phy_marks,chem_marks,bio_marks,maths_marks,computer_marks;
    cin>>phy_marks>>chem_marks>>bio_marks>>maths_marks>>computer_marks;
    float percentage;
    percentage=(phy_marks+chem_marks+bio_marks+maths_marks+computer_marks)*100/500;
    int a;
    a=percentage/10;
    switch(a){
        case 9:
        cout<<"grade A"<<endl;
        break;
        case 8:
        cout<<"grade B"<<endl;
        break;
        case 7:
        cout<<"grade C"<<endl;
        break;
        case 6:
        cout<<"grade D"<<endl;
        break;
        case 5:
        cout<<"grade E"<<endl;
        break;
        case 4:
        cout<<"grade E"<<endl;
        break;
        default:
        cout<<"grade F"<<endl;
    }
    return 0;
}