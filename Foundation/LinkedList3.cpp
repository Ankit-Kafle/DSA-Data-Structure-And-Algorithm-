// INSERTION IN LL
//Here we are doing three things in this program 
// 1.)Insertion at begining 2.)Insert at end and 3.)Insert after a given location

// INSERTION IN LL
//Here we are doing three things in this program 
// 1.)Insertion at begining 2.)Insert at end and 3.)Insert after a given location

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

//Insertion at begining
void insbig()
{
	 newnode= (struct node*)malloc(sizeof(struct node));
	printf("Enter data you want to insert");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}

//Insertion at ending
void insend(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data you want to insert: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
        return;
    }

    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}


//Insertion after a Given Location(GL)
void insGL(){
    int i = 1, count = 0;
    temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    printf("Enter the position: ");
    scanf("%d",&pos);

    if(pos > count){
        printf("Invalid position\n");
        return;
    }

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&newnode->data);

    temp = head;
    while(i < pos){
        temp = temp->next;
        i++;
    }

    newnode->next = temp->next;
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
	
    printf("Enter choice:\n 1 for Creatiom of Nodes\n 2 for Insertion at begining\n  3 for Insertion at ending\n  4 for Insertion at given location\n 5 for Display\n 6 for exist");
    scanf("%d",&ch);
	switch(ch){

    case 1:create();
    break;

		case 2:insbig();
		break;
			
		case 3:insend();
		break;
		
		case 4:insGL();
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



