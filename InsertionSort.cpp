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
for(i=1;i<n;i++){
    temp=A[i];
    j=i-1;
    while (j>=0 && A[j]>temp)
    {
        A[j+1]=A[j];
        j--;
    }
    A[j+1]=temp;
}

	cout<<"\n Insertion Sort of the given array is:\n";
	for(i=0;i<n;i++){
		cout<<"\nThe " <<i+1<<" element in array is: ";
		cout<<A[i];
	}
}
