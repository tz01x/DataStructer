#include<stdio.h>
#include<stdlib.h>

typedef  struct node node;

struct node{
int val;
node *next;
};

node *head=NULL; ///head is a global variable

void create(){
node *newnode,*tail;
int num;
printf("how many ! ");
scanf("%d",&num);

for (int i=0;i<num;i++){

newnode=(node*)malloc(sizeof(node));
printf("enter data : ");
scanf("%d",&newnode->val);
newnode->next=NULL;

if(head==NULL){
    head=newnode ;
    tail=newnode;
}else{
tail->next=newnode;
tail=newnode;
}
}


}
void display(){
    node *temp=head;
    printf("\n\n\n");
    while(temp!=NULL){
        printf("%d , ",temp->val);
        temp=temp->next;
    }
    printf("\n\n\n");
}



void search(){
    int x;
    printf("enter the value ");scanf("%d",&x);
    node *temp=head;
    while(temp!=NULL){
        if(temp->val==x){
            printf("FOUND : %d ",temp->val);
                    }
        temp=temp->next;
    }

}

void insert_at_beginning(){
printf(" \n insert_at_beginning \n  ");
    node *temp=head;
    ///input start
    node *curr;
    curr=(node*)malloc(sizeof(node));
    printf("Enter a value : ");
    scanf("%d",&curr->val);
    curr->next= NULL;
    ///input end
    if(head==NULL){
        head=curr;
    }else{
    head=curr;
    curr->next=temp;
    }
}
void insert_at_end(){
printf(" \n insert_at_end \n  ");
node *temp=head,*temp1;

    node *curr;
    curr=(node*)malloc(sizeof(node));
    printf("Enter a value : ");
    scanf("%d",&curr->val);
    curr->next= NULL;

    if(head==NULL){

    }else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=curr;
    }



}
void insert_at_location(){
    printf(" \n insert_at_any_position  \n  ");
    node *temp=head,*temp1;

   node *curr;
    curr=(node*)malloc(sizeof(node));
    printf("Enter a value : ");
    scanf("%d",&curr->val);
    curr->next= NULL;

    if(head==NULL){
        head=curr;
    }else{
    printf("\n which  location  you want to insert the  DATA  : ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=curr;
    curr->next=temp;
    }

}

void delete_first(){
    printf(" \n delete_at_beginning \n  ");
    node *temp=head;

    head=head->next;/// re_assign  head

    free(temp);     /// deleting first element



}

void delete_last(){
printf(" \n delete_at_end\n  ");
     node *temp=head,*temp1;
     while(temp->next!=NULL){
        temp1=temp;
        temp=temp->next;
     }
     temp1->next=NULL;
     free(temp);

}
void delete_at_location(){
node *temp=head,*temp1;


printf(" \n delete_at_any position \n  ");
    printf("\n which  location  you want to Delete   : ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        temp1=temp;
        temp=temp->next;
    }
    temp1->next= NULL ;
    free(temp) ;

    printf("\n deleted . . \n");


}

void max(){

    /// max value in link list

    int data=head->val;
    node *temp=head;
    while(temp!=NULL){
            if(temp->val > data ){

                data= temp->val;

            }
        temp=temp->next;
    }

    printf("\n the max value is  :  %d \n",data);


}

int main(){

create();
display();
insert_at_beginning();
//insert_at_location();
//delete_last();
//max();
display();
//search();



}
