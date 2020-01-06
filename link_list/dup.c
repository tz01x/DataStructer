#include<stdio.h>
#include<stdlib.h>
#define null NULL
typedef struct node{
int data;
struct node *next;
}node;

node *head=NULL;

node * input(){ /// input data
node *curr;
curr=(node*)malloc(sizeof(node));
printf("enter an integer number : ");
scanf("%d",&curr->data);
curr->next=NULL;
}
void creat_link_list(){  /// create link list

    node *curr,*tail;
    int n,i=0;
    printf(" How many item ?   ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        curr=input(); /// input return node*

    if(head==NULL){
       head= curr;
       tail=curr;
    }else{
    tail->next=curr;
    tail=curr;
    }
    }


}
void display(){///display
node *temp=head;

printf("\n\n\n \t displaying  .. \n\n");
while(temp!=NULL){
    printf("%d , ",temp->data);
    temp=temp->next;
}
printf("\n\n\n");

}
void duplicate(){

node *dup=head,*temp,*temp1;
while(dup!=NULL){
        temp=dup;
        temp1=temp;
        temp=temp->next;
    while(temp!=NULL){

        if(dup->data != temp->data){

        temp1=temp;
        temp=temp->next;

        }else {

             temp1->next=temp->next;
             temp=temp->next;
        }

    }
    dup=dup->next;
}

}
void short_dubble(){
    printf("bubble shorting .. ");
    node *iter=head,*temp,*temp1;

    while(iter!=NULL){

        temp1=iter;
        temp=iter->next;

        while(temp!=NULL){

            if(!(iter->data > temp->data)/** temp->data is greater then iter->data */){

                temp=temp->next;
            }else{
            int tempdata=temp1->data;
            temp1->data=temp->data;
            temp->data=tempdata;

            }
        }

        iter=iter->next;
    }
}
void jshort(){
 node *iter=head,*temp,*temp1;
while(iter!=null){
    temp=iter;
    while(temp!=null){
        if(iter->data>temp->data){
            int data=iter->data;
            iter->data=temp->data;
            temp->data=data;
        }else{
        temp=temp->next;
        }
    }
    iter=iter->next;


}

}

int isperfect(int x){
int sum=0;
for(int i=1;i<x;i++){
    if(x%i==0){
        sum=sum+i;
    }
}
if(x==sum){
    return 1;
}
return 0;

}
void displayPERFACT(){
   node *temp= head;
while(temp!=null){
    if(isperfect(temp->data)){
        printf("%d , ",temp->data);

    }
    temp=temp->next;
}
printf("\n\n");
}
int main(){
creat_link_list();

display();

displayPERFACT();
}
