//Dynamic memory allocaton 

//Memory allocation malloc(): It takes no of byte as input and return a null pointer.It initialize each memory block with garbage value
// notation *ptr, ptr= (int*) malloc(n*sizeof(int));

//Realloc() function: Sometimes the dynamically allocated memory is insufficient or more than required. Realloc is used to allocate memory of new size using the previous pointer and size.
//syntax: ptr= realloc(ptr,newsize)

//calloc(): Continuous allocation initializes each memmory block with a default value of 0
//ptr=(int*)calloc(30,sizeof(float));


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i,m,c;
    int* ptr;

    printf("Enter the size of memory: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // Taking input
    for (i = 0; i < n; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &ptr[i]);
    }

    // Displaying output
    printf("Elements in array:\n");
    for (i = 0; i < n; i++) {
        printf("%d \n ", ptr[i]);
    }

printf("Enter the size of memmory you want to resize again");
scanf("%d",&m);

//Using Realloc
ptr=(int*)realloc(ptr,m*sizeof(int));
// Taking input again for new size
    for (i = 0; i < m; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &ptr[i]);
    }

    // Displaying output
    printf("Elements in array:\n");
    for (i = 0; i < m; i++) {
        printf("%d\n ", ptr[i]);
    }


   //Calloc function review
   float *pointer;
     printf("Enter the size of memory for calloc: ");
    scanf("%d", &c);
pointer =(float*)calloc(c,sizeof(float));
  for (i = 0; i < c; i++) {
        printf("Enter the floating number to the element at index %d: ", i);
        scanf("%f", &pointer[i]);
    }

    // Displaying output
    printf("Elements in array:\n");
    for (i = 0; i < c; i++) {
        printf("%f\n ", pointer[i]);
    }
    // Free allocated memory
    free(ptr);
    free(pointer);

    return 0;
}







