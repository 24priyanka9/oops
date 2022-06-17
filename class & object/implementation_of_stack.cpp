#include<bits/stdc++.h>
using namespace std;
const int MAX=25;
class stack{
    protected:
    int s[MAX];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(int num){
        top++;
        s[top]=num;
    }
    int pop(){
        int num;
        num=s[top];
        top--;
        return (num);
    }
};
class stack1 : public stack{
    public:
    void push(int num){
        if(top==MAX-1){
            cout<<endl<<"Stack is full";
        }
        else{
            stack::push(num);
        }}
        int pop(){
            int n;
            if(top==-1){
                cout<<endl<<"Stack is empty";
                return 0;
            }
            else{
                n=stack::pop();
                return (n);
            }
        }
    };
    int main(){
        int n;
        stack1 stk;
        stk.push(10);
        stk.push(20);
        stk.push(30);
        n=stk.pop();
        cout<<endl<<n;
        n=stk.pop();
        cout<<endl<<n<<endl;
        return 0;
    }
