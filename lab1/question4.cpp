#include<bits/stdc++.h>
using namespace std;
struct students{
    int roll_no;
    string name;
    int phy_marks;
    int chem_marks;
    int maths_marks;
};
int main(){
    students st[5];
    float percentage[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the roll no:"<<endl;
        cin>>st[i].roll_no;
        cout<<"Enter the name:"<<endl;
        cin>>st[i].name;
        cout<<"Enter the physics marks:"<<endl;
        cin>>st[i].phy_marks;
        cout<<"Enter the chemistry marks:"<<endl;
        cin>>st[i].chem_marks;
        cout<<"Enter the maths marks:"<<endl;
        cin>>st[i].maths_marks;
        percentage[i]=((st[i].phy_marks+st[i].chem_marks+st[i].maths_marks)*100)/300;
        cout<<"percentage: "<<percentage[i]<<endl;
         }
         return 0;
}