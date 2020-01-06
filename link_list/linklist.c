#include<stdio.h>
#include<stdlib.h>

typedef  struct node node;

struct node{
int val;
node *next;
};
node *head='\0';


void create(){
node *carr,*tail;
int num;
printf("how many ! ");
scanf("%d",&num);

for (int i=0;i<num;i++){
carr=(node*)malloc(sizeof(node));
scanf("%d",&carr->val);
carr->next=NULL;
if(head=='\0'){
    head=carr ;
    tail=carr;
}else{
tail->next=carr;
tail=carr;
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

void _rev_(){
node *old_head=head;
node *temp,*temp1;
head=NULL;
while(old_head->next!=NULL){
    if(old_head!=NULL){
        temp=old_head;
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
        if(head==NULL){
            printf("reversing . . . \n");
            head=temp;
            head->next=temp1;
            temp1->next=NULL;
        }else{
            temp->next=temp1;
            temp1->next=NULL;
        }
    }

}

display();


}

void search(){
    int x;
    printf("enter the value ");scanf("%d",&x);
    node *temp=head;
    while(temp!='\0'){
        if(temp->val==x){
            printf("FOUND : %d ",temp->val);
                    }
        temp=temp->next;
    }

}
node* input(){
    node *curr;
    curr=(node*)malloc(sizeof(node));
    printf("Enter a value : ");
    scanf("%d",&curr->val);
    curr->next= NULL;
    return curr;
}
void insert_at_biging(){

    node *temp=head;
    node *curr=input();
    if(head==NULL){
        head=curr;
    }else{
    head=curr;
    curr->next=temp;
    }
}
void insert_at_end(){

node *temp=head,*temp1;
    node *curr=input();
    if(head==NULL){

    }else{
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=curr;
    }



}


void delete_first(){
    node *temp=head;

    head=head->next;/// re_assign  head

    free(temp);     /// deleting first element



}

void delete_last(){
     node *temp=head,*temp1;
     while(temp->next!=NULL){
        temp1=temp;
        temp=temp->next;
     }
     temp1->next=NULL;
     free(temp);

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
///bubble short
//void boubble_short(){
//    node *temp=head;
//    while(temp!=NULL){
//        node*temp1=temp1;
//                    while(temp1!=NULL){
//
//
//            if(temp->val > temp1->val){
//
//            }
//            temp1=->next;
//        }
//        temp=temp->next;
//    }
//}
int main(){

create();
display();
//insert_at_biging();
//insert_at_particular_location();
//max();
display();
//search();
//_rev_();


}
