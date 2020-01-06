#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <exception>
#define null  NULL
using namespace std;

typedef struct node{
char data;
node *next;
}node;
node *head=null;
//void push(int data){
//    node *curr=(node *)malloc(sizeof(node));
//    curr->data=data;
//    curr->next=null;
//    if(head==null){
//        head=curr;
//    }else{
//    curr->next=head;
//    head=curr;
//    }
//
//}
void push(char data){
    node *curr=(node *)malloc(sizeof(node));
    curr->data=data;
    curr->next=null;
    if(head==null){
        head=curr;
    }else{
    curr->next=head;
    head=curr;
    }

}
//int pop(){
//if(head->next!=null){
//    node *temp=head;
//    head=head->next;
//    return temp->data;
//
//}else{return 0;}
//}
char pop(){
if(head->next!=null){
    node *temp=head;
    head=head->next;
    return temp->data;

}else{return 0;}
}
char peek(){

    if(head!=null){
        return head->data;
    }

}
void dis(){
    node*temp=head;
while(temp!=null){
        printf("%c  ",temp->data);
    temp=temp->next;
}
}
int is_empty(){
if(head==null){
    return 0;
}else{return 1;}
}
int menu(){

printf("1 pop \n");
printf("2. push \n");
printf("3. display \n");

int n;
scanf("%d",&n);
if(n==1){
   cout<<pop()<<endl;
}else if(n==2){
    int x;
    cin>>x;
   push(x) ;
}else if(n==3){
    dis();
}else if(n==0){
return 0;
}

}

//void chack(char a){
//
//    if(a=='('){
//        push(a);
//       }else{
//       if(a==')'){
//        while()
//       }
//       }
//
//}

int main(){
string infix="(a+b)*c";
}
