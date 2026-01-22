//IMPLEMENT OF STACK USING ARRAY 
#define N 5   
#include<iostream>
using namespace std;


int stack[N];   //defining the size of stack here
int top=-1;
void push(){
    int x;
    cout<<"Enter data";
    cin>>x;

    if(top==N-1)
    {
        cout<<"Stack is overflow";
    }
    else {
        top++;
        stack[top]=x;
    }

}


void pop(){
    int item;
    if(top==-1){
        cout<<"stack is underflow";
    }
    else{
        item=stack[top];
        top--;
        cout<<item;
    }
}

void peek(){             // peek means top which mean we are printing the element which is in the top of the stack but we are not removing it completely
    if(top==-1){
cout<<"Stack is empty";
    }

    else{
        cout<<stack[top];
    }
}

void display(){
    int i;
    for(i=top; i>=0;i--){
        cout<<stack[i];
    }
}

int main(){
    int ch;
    do{
        cout<<"Enter choice: 1:push, 2:pop, 3:peek, 4:display";
        cin>>ch;

        switch(ch){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: display();
            break;
             
            default: cout<<"Invalid Choice";

        }
    }while(ch!=0);
    return 0;

}





