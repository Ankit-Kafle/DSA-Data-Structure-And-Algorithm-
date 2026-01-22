//THERE ARE 4 TYPE OF BASIC ARRAY OPERATION WE CAN DO IN ARRAY i.e
// 1.)Traversal [to travel all the index of an array]
// 2.)Searching [to search the element in a array]
// 3.)Insertion [to insert the element in any location of an array which we have defined]
// 4.)Deletion  [to delete the element in any location of an array which we have defined]


//code for traversal and insertion  for an array [22,33,44,55,66,....] of size 20

#include<iostream>
using namespace std;

void display(int arr[],int n){   

	//code for traversal
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}
	cout<<"\n";
	
}

int indInsertion(int arr[],int size,int element,int capacity,int index)  //Here we have send actual data(argument) to the parameter(placeholder)
{
	//code for insertion
	if(size>=capacity){ //If the size is greater than capacity of array than there is no chance of insertion because array is full
		return -1;
	}
	
	for(int i=size-1;i>=index;i--){   
		arr[i+1]=arr[i];     //shifting all the element of array to the backside from that index where we are going to insert [22,33,44,55,66...] to [22,33, ,44,55,66..]
	}
	
	arr[index]=element;  //filling that empty index where we are going to insert
	return 1;
}

int main(){
	int arr[20]={22,33,44,55,66};
	int size=5,element=77,index=3;
	display(arr,size);
	indInsertion(arr,size,element,100,index);
	size+=1;
	display(arr,size);
	return 0;
}
	


