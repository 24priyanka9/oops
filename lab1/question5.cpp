#include<bits/stdc++.h>
using namespace std;
struct students{
    int roll_no;
    int age;
    string name;
    string address;
};
void age_equal_to_14(students *st,int n){
    cout<<"Name of students whose age is 14:"<<endl;
    for(int i=0;i<n;i++){
        if(st[i].age==14){
            cout<<st[i].name<<endl;
        }
    }
}
void even_roll_no(students *st,int n){
    cout<<"Name of those students whose roll no is even:"<<endl;
    for(int i=0;i<n;i++){
          if(st[i].roll_no%2==0){
              cout<<st[i].name<<endl;
          }
    } 
}
void details_of_students(students *st,int n){
    int roll_no;
    cout<<"Enter roll no";
    cin>>roll_no;
    for(int i=0;i<n;i++){
        if(roll_no==st[i].roll_no){
        cout<<"Roll no: "<<st[i].roll_no<<endl<<"Name: "<<st[i].name<<endl<<"Age: "<<st[i].age<<endl<<"Address: "<<st[i].address<<endl;
        return;
        }
    }
    
}
int main(){
      int n;
      cin>>n;
      students st[n];
      for(int i=0;i<n;i++){
          cin>>st[i].roll_no>>st[i].age>>st[i].name>>st[i].address;
      }
      age_equal_to_14(st,n);
      even_roll_no(st,n);
      details_of_students(st,n);
    return 0;
}