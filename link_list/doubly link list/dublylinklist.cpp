#include<iostream>
#include<stdlib.h>
#define null  NULL
using namespace std;
typedef struct node{
int data ;
node *next;
node *pre;
}node;
node *head=null;
int counter=0;
node* input(){
node *curr=(node*)malloc(sizeof(node));
cout<<"enter data "<<endl;
cin>>curr->data;
curr->next=null;
curr->pre=null;
counter++;
return curr;
}
void create(){
node *newnode,*tail;
int x;
cout<<" how many ? "<<endl;
cin>>x;
for(int i=0;i<x;i++){
    newnode=input();
    if(head==null){
        head=newnode;
        tail=newnode;
    }else{
        tail->next=newnode;
        newnode->pre=tail;
        tail=newnode;
    }
}
}
void display(){

node *temp=head;
while(temp!=null){
        cout<<" data :"<<temp->data<<endl;
    temp=temp->next;
}

}
void delete_first(){

node *temp=head;

head=head->next;

temp->next->pre=null;
counter--;
free(temp);
cout<<"deleting complete"<<endl;
}
void delete_last(){

node *temp=head;
while(temp->next!=null){

    temp=temp->next;
}
temp->pre->next=null;
counter--;
free(temp);
cout<<"deleting complete"<<endl;
}
void delete_position(){
/** delete at position
*/
node *temp=head,*temp1;
int n;
cout<<"deleting position ? "<<endl;
cin>>n;
if(!(n<=counter)&&n>0){
        /**counter is Global variable that track how many item in the link list */
    cout<<"out of range "<<endl;
}else{
for(int i=1;i<n;i++){
    temp1=temp;
    temp=temp->next;
}
temp1->next=temp->next;
temp->next->pre=temp1;
counter--;
free(temp);
cout<<"deleting complete"<<endl;
}
}
int main(){
create();
display();
delete_position();

display();
}
