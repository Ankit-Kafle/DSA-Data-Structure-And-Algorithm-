//Linked List is a data structure used to store a collection of elements dynamically. Binary Search is not possible in linkedlist

//LINKLIST CREATION AND TRAVERSAL
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


//Here we are sending the head pointer which is pointing first node through which we are acessing data and next pointer through which we are acessing another Node
void linkedlistTraversal(struct Node *ptr)
{
    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //Allocate memory for nodes in the linkedlist in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    //link first and second nodes
    head->data=7;
    head->next=second;


    //link second and third nodes
    second->data=11;
    second->next=third;


    //terminate the list at the third node
    third->data=66;
    third->next=NULL;

    linkedList Traversal(head);
    return 0;



}