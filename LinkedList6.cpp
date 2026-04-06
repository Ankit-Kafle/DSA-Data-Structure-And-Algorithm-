// Insertion in Doubly LinkedList 
#include<stdio.h>
#include<stdlib.h>



   struct node{
        int data;
        struct node *next;
        struct node *prev;
    };

    struct node *head=NULL, *temp,*tail;
    int choice=1;
    int pos;
    int ch;
    
    
    
    
    
//Creation of Node in LinkedList
void createDLL(){
    int count=0;
    struct node *newnode;
      while(choice){
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
      
        newnode->prev=0;
          newnode->next=0;

        if(head==0)
        {
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    
    printf("do you want to continue(0,1)?\n");
    scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
     
    }
    printf("The length or no nodes in this doublyLinkedList is %d ",count);
}





//Insertion at begining
void insbig()
{
    struct node *newnode;
	 newnode= (struct node*)malloc(sizeof(struct node));
	printf("Enter data you want to insert");
	scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    head->prev=newnode;
	newnode->next=head;
	head=newnode;
}





//Insertion at ending
void insend(){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data you want to insert");
    scanf("%d",&newnode->data);

    newnode->next = NULL;   // ? THIS LINE
    newnode->prev = NULL;

    if(head == NULL){
        head = tail = newnode;
    }
    else{
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}






//Insertion at given position
void insertAtPos(){
    int i = 1, count = 0, pos;
    struct node *newnode;

    temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    printf("Enter the position: ");
    scanf("%d",&pos);

    if(pos > count || pos < 1){
        printf("Invalid position\n");
        return;
    }
    else if(pos == 1){
        insbig();
        return;
    }

    temp = head;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);

    while(i < pos-1){
        temp = temp->next;
        i++;
    }

    newnode->prev = temp;
    newnode->next = temp->next;

    if(temp->next != NULL){
        temp->next->prev = newnode;
    } else {
        tail = newnode;   // inserting at end
    }

    temp->next = newnode;
}






//Inserting after the given postion
void insertAfterPos(){
    int i = 1, count = 0, pos;
    temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    printf("Enter the position: ");
    scanf("%d",&pos);

    if(pos > count || pos < 1){
        printf("Invalid position\n");
        return;
    }

    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);

    temp = head;
    while(i < pos){
        temp = temp->next;
        i++;
    }

    newnode->prev = temp;
    newnode->next = temp->next;

    if(temp->next != NULL)
        temp->next->prev = newnode;
    else
        tail = newnode;

    temp->next = newnode;
}






void display(){
	 int count=0;
	 temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
        count++;
    }
    printf("The no of node created is %d \n",count);
}





int main()
{
 
    do{
	
    printf("Enter choice:\n 1 for Creatiom of Nodes\n 2 for Insertion at begining\n  3 for Insertion at ending\n  4 for Insertion at given location\n  5 insertion after the given position\n 6 for Display\n 0 for exit");
    scanf("%d",&ch);
	switch(ch){

    case 1:createDLL();
    break;

		case 2:insbig();
		break;
			
		case 3:insend();
		break;
		
		case 4:insertAtPos();
		break;
		
        case 5:insertAfterPos();
        break;

		case 6:display();
		break;
		
		case 0:break;
		
		default:
		printf("Invalid choice");
	}
	}while(ch!=0);
	
    return 0;
}
