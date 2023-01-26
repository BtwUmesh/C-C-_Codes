#include<iostream>
using namespace std;
int stack[100], n=100, top=-1;

void push(int val){
    if(top>=n-1)
    cout<<"Overflow";

    else{
        top++;
        stack[top]=val;

    }
}

void pop(){
    if (top<=-1)
    cout<<"Underflow";
    else{
        cout<<"Poped Element"<<stack[top];
        top--;
    }
}

void display(){
    if (top>=0){
        cout<<"Elements are:";
        for(int i = top; i>=0; i--){
            cout<<stack[i]<<" ";
        }
    }

    else{
            cout<<"Empty Stack";
        }
    
}
int peek(){
    if(top < 0){
        cout<<"Stack Empty";
        return -1;
    }
    else{
        return stack[top];
    }
}

int main(){                     //driver code
    int i, ch, val;
    cout<<" Enter 1 for push 2 for pop 3 to display stack";
    do{
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Enter values to be pushed:";
                cin>>val;
                push(val);
                break;
            
            case 2:
                pop();
                break;
            
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            default: 
            cout<<"Invalid";
        }
    }while(ch!=4);
    return 0;
}


