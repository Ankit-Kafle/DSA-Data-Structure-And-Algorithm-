// Insertion in Doubly LinkedList 
#include<stdio.h>
#include<stdlib.h>



   struct node{
        int data;
        struct node *next;
        struct node *prev;
    };

    struct node *head=NULL, *temp,*tail;
    int pos;
    int ch;
    
    
    
    
    
//Creation of Node in LinkedList
void createDLL(){
	 int choice=1;
    int count=0;
    struct node *newnode;
      while(choice){
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
      
        newnode->prev=0;
          newnode->next=0;

        if(head==NULL)
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





//Deletion from begining
void DelBig(){
    struct node *temp;

    if(head == NULL){
        printf("Linked List is empty\n");
    }
    else if(head == tail){
        temp = head;
        head = tail = NULL;
        free(temp);
    }
    else{
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}


//Deletion from ending
void DelEnd(){
    struct node *temp;

    if(head == NULL){
        printf("Linked List is empty");
    }
    else if(head == tail){
        temp = head;
        head = tail = NULL;
        free(temp);
    }
    else{
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    }
}






//Deletion from the given position
void DelFromPos(){
    int i = 1, pos;
    struct node *temp;

    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    printf("Enter Position: ");
    scanf("%d",&pos);

    if(pos <= 0){
        printf("Invalid position\n");
        return;
    }

    if(pos == 1){
        DelBig();
        return;
    }

    temp = head;
    while(i < pos && temp != NULL){
        temp = temp->next;
        i++;
    }

    if(temp == NULL){
        printf("Position out of range\n");
        return;
    }

    if(temp == tail){
        DelEnd();
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
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
	
    printf("Enter choice:\n 1 for Creatiom of Nodes\n 2 for Deletion at begining\n  3 for Deletion at ending\n  4 for Deletion at given location\n 5 for Display\n 0 for exit");
    scanf("%d",&ch);
	switch(ch){

    case 1:createDLL();
    break;

		case 2:DelBig();
		break;
			
		case 3:DelEnd();
		break;
		
		case 4:DelFromPos();
		break;
	
		case 5:display();
		break;
		
		case 0:break;
		
		default:
		printf("Invalid choice");
	}
	}while(ch!=0);
	
    return 0;
}
