#include<iostream>
using namespace std;
int main()
{
	int i,j,n,min;
	cout<<"Enter the no of array you want to create";
	cin>>n;
	int A[n];
	for(i=0;i<n;i++){
		cout<<"Enter the "<<i+1<<" Element in a array";
		cin>>A[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++){
			if(A[j]<A[min])
			{
				min=j;
			}
		}
		if(min!=i){
			swap(A[i],A[min]);
		}
	}
	cout<<"\Selection Sort of the given array is:\n";
	for(i=0;i<n;i++){
		cout<<"\nThe " <<i+1<<" element in array is: ";
		cout<<A[i];
	}
}
