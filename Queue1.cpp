// QUEUE IS A USEFUL DATA STRUCTURE METHOD WHCH FOLLOWS FIRST IN FIRST OUT (FIF0) PRINCIPLE
//QUEUE ADTS ARE:  
//  DATA: 1.)STORAGE  2.)INSERTION END  3.)DELETION END 
// METHODS: ENQUEUE , DEQUEUE , FIRST VALUE , LAST VALUE , PEAK , ISEMPTY , ISFULL

// implementation of queue by using static method
#define N 5
#include<iostream>
using namespace std;
int queue[N];
int front=-1, rear=-1;


void enqueue(int x)
{
	if(rear==N-1)
	{
		cout<<"overflow";
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}
}
 
 void dequeue(){
 	
 	if(front==-1 && rear==-1){
 		cout<<"underflow";
	 }
	 
	 else if(front==rear){
	 	front=rear=-1;
	 }
	 else{
	 cout<<queue[front];
	 	front++;
	 }
 }
 
 void display(){
 	int i;
 		if(front==-1 && rear==-1){
 		cout<<"underflow";
	 }
	 
	 else{
	 	for(i=front; i<rear+1; i++){
	 		cout<<queue[i];
		 }
	 }
 }
 
 
 void peek()
 {
 		if(front==-1 && rear==-1){
 		cout<<"underflow";
	 }
	 
	 else{
	 	cout<<queue[front];
	 }
 }
 
 int main(){
 	enqueue(2);
 	enqueue(5);
 	enqueue(-1);
 	display();
 	peek();
 	dequeue();
 	peek();
 	display();
 }
