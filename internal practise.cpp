#include<stdio.h>
#include<stdlib.h>


//int main(){
//	int a=5;
//	int *p;
//	p=&a;
//	cout<<*p<<" this is the value of a retrieve from *p \n";
//	cout<<&a<<" this is the adress of 'a' integer from '&a'itself \n";
//	cout<<a<<" this is the value of 'a' itself \n";
//	cout<<p<<" this is the value of p which store tbe adress of a \n";
//	cout<<&p<<" this is the adress of p itself \n";
//	return 0;
//}


int main(){
	int n,i;
	int *ptr;
	printf("Enter the size of DM you want to create");
	scanf("%d",&n);
	ptr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
	printf("Enter the element in the memory of the heap ");
	scanf("%d",&ptr[i]);
	}
printf("%d",ptr[i-1]);
free(ptr);
	return 0;
}
