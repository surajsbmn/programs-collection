//Suraj Subramanian
//Program to implement and demo Singly Linked List

#include<iostream>
#include<stdlib.h>
using namespace std;

#define QUIT 99

struct node * createNode();      //Create node in memory
bool push_back(struct node **);        //Push element to end of the list
bool push_front(struct node **);       //Push element to the front of the list
bool push_after(int,struct node **);    //Insert after given element in the list
void pop_back(struct node **);            //Pop element form the end of the list
void pop_front(struct node **);
void pop_element(int,struct node **);
void show(struct node **);                //Display the list
void free_nodes(struct node **);          //Free the memory allocated to nodes

//Node Structure
struct node{
    int data;
    struct node * next;
};



int main(){
    struct node *head=NULL;
    int choice;
    while(choice!=QUIT){
        cout<<"Single Linked List Demo"<<endl;
        cout<<"1. PUSH BACK"<<endl;
        cout<<"2. PUSH FRONT"<<endl;
        cout<<"3. PUSH AFTER"<<endl;
        cout<<"4. POP BACK"<<endl;
        cout<<"5. POP FRONT"<<endl;
        cout<<"6. POP ELEMENT"<<endl;
        cout<<"7. SHOW LIST"<<endl;
        cout<<"99. QUIT"<<endl;
        cin>>choice;
        
        switch(choice){
            case 1:
                if(!push_back(&head))
                    cout<<"PUSH FAILED";
                show(&head);
                break;
            case 2:
                if(!push_front(&head))
                    cout<<"PUSH FAILED";
                show(&head);
                break;
            case 3:
                int element;
                cout<<"Enter the element to insert after:"<<endl;
                cin>>element;
                if(!push_after(element,&head))
                    cout<<"PUSH FAILED";
                show(&head);
                break;
            case 4:
                pop_back(&head);
                show(&head);
                break;
            case 5:
                pop_front(&head);
                show(&head);
                break;
            case 6:
                int temp_element;
                cout<<"Enter the element to delete from the list:"<<endl;
                cin>>temp_element;
                pop_element(temp_element,&head);
                show(&head);
                break;
            case 7:
                show(&head);
                break;
            case 99:
                cout<<"QUITING..."<<endl;
                break;
            default:
                cout<<"INVALID CHOICE!!!"<<endl;
        }
    }
    free_nodes(&head);
    return 0;
}

bool push_back(struct node **head){
    
    struct node *new_node=createNode();
   
    if(new_node==NULL)
        return false;

    if(*head==NULL){
        *head=new_node;
        return true;
    }

    struct node * current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=new_node;
    
    return true;
}

bool push_front(struct node **head){
    struct node *new_node=createNode();
    
    if(new_node==NULL)
        return false;

    new_node->next=*head;
    *head=new_node;

    return true;

}


bool push_after(int pos,struct node **head){
    
    struct node * new_node=createNode();
    if(new_node==NULL)
        return false;

    struct node *current=*head;
    while(current->data!=pos){
        current=current->next;
    }
    
    new_node->next=current->next;
    current->next=new_node;
    
    return true;
}


void pop_back(struct node **head){

    struct node * current=*head;
    if(current->next==NULL){
        free(current);
        head=NULL;
        return;
    }

    while(current->next){
        if(current->next->next==NULL){
            free(current->next);
            current->next=NULL;
            return;
        }
        current=current->next;
    }
    
}

void pop_front(struct node **head){
    struct node * current=*head;

    if(*head){
        *head=(*head)->next;
        free(current);
   
 }
}

//pop element from middle
void pop_element(int element,struct node **head){
    struct node * current =*head;
    
    if(current->data==element){
        free(current);
        *head=NULL;
        return;
    }

    while(current->next->data!=element){
        current=current->next;
        if(current->next==NULL){
            cout<<"Element not Found"<<endl;
            return;
        }
    }

    struct node * tmp=current->next;

    current->next=current->next->next;
    free(tmp);
    
}

//Create new node in memory
struct node * createNode(){
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    cout<<"Enter Element:"<<endl;
    cin>>new_node->data;
    new_node->next=NULL;
    return new_node;
}

//Display Linked List
void show(struct node **head){
    struct node * current=*head;
    printf("HEAD");
    while(current){
        printf("->%3d ",current->data);
        current=current->next;
    }
    printf("\n");
}

//Free all memory for the list before program termination
void free_nodes(struct node **head){
    struct node * current;
    while(*head){
        current=*head;
        *head=(*head)->next;
        free(current);
    }
}
