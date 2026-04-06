#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp;
	cout<<"Enter the no of array you want to create";
	cin>>n;
	int A[n];
	for(i=0;i<n;i++){
		cout<<"Enter the "<<i+1<<" Element in a array";
		cin>>A[i];
	}
	for(i=0;i<n-1;i++){
		int flag=0;
		for(j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
	
	cout<<"\nBubble Sort of the given array is:\n";
	for(i=0;i<n;i++){
		cout<<"\nThe " <<i+1<<" element in array is: ";
		cout<<A[i];
	}
}
