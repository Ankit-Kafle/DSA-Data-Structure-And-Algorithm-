//Deletion From LinkedList

#include<stdio.h>
#include<stdlib.h>



   struct node{
        int data;
        struct node *next;
    };

    struct node *head=NULL, *newnode,*temp;
    int choice=1;
    int pos;
    int ch;
    




//Creation of Node in LinkedList
void create(){
      while(choice){
        newnode= (struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;

        if(head==0)
        {
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    
    printf("do you want to continue(0,1)?\n");
    scanf("%d",&choice);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
     
    }
}


//Deletion from begining
void DelBig(){
    if(head==NULL){
        printf("List is Empty");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
    printf("Node deleted from beginning\n");

}


//Deletion from ending
void DelEnd(){
    struct node *prevnode;
    
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    if(head->next == NULL){   // only one node
        free(head);
        head = NULL;
        return;
    }

    temp = head;
    while(temp->next != NULL){
        prevnode = temp;
        temp = temp->next;
    }
    prevnode->next = NULL;
    free(temp);
}


//Deletion from position
void DelGL(){
    struct node *nextnode;
    int pos, i=1;

    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    printf("Enter Position:");
    scanf("%d",&pos);

    if(pos == 1){
        DelBig();
        return;
    }

    temp = head;
    while(i < pos-1 && temp->next != NULL){
        temp = temp->next;
        i++;
    }

    if(temp->next == NULL){
        printf("Invalid position\n");
        return;
    }

    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}


//Displaying the nodes
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
	
    printf("Enter choice:\n 1 for Creatiom of Nodes\n 2 for Deletion at begining\n  3 for Deletion at ending\n  4 for Deletion at given location\n 5 for Display\n 6 for exist");
    scanf("%d",&ch);
	switch(ch){

    case 1:create();
    break;

		case 2:DelBig();
		break;
			
		case 3:DelEnd();
		break;
		
		case 4:DelGL();
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

