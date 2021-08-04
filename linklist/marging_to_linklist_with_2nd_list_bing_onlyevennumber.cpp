#include <bits/stdc++.h>

#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define null NULL
typedef struct node node;

 struct node{
int data;
struct node *next;
};



node * input(){ /// input data
node *curr;
curr=(node*)malloc(sizeof(node));
printf("enter an integer number : ");
scanf("%d",&curr->data);
curr->next=NULL;
}
node * creat_link_list(node *head){  /// create link list
node *tail=null;
    node *curr;
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

return head;
}
void display(node *head){///display
node *temp=head;


while(temp!=NULL){
    printf("%d , ",temp->data);
    temp=temp->next;
}


}

int main(){


node *head=null;
node *head1=null;

head=creat_link_list(head);
head1=creat_link_list(head1);

node *iter=head;

while(iter->next!=null){
    iter=iter->next;
}


node *iter2=head1;


while(iter2!=null){
    if(iter2->data%2==0){
        iter->next=iter2;
        iter=iter->next;
    }
    iter2=iter2->next;
}

display(head);


}
