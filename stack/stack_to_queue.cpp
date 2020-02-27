#include<iostream>
#include <stdio.h>
using namespace std;
#define SIZE 5
class Queue{
private:

int items[SIZE];
int front = -1, rear =-1;
public:
int isFull()
{
    if( (front == rear + 1) || (front == 0 && rear == SIZE-1)) return 1;
    return 0;
}

int isEmpty()
{
    if(front == -1) return 1;
    return 0;
}

void enQueue(int element)
{
    if(isFull()) printf("\n Queue is full!! \n");
    else
    {
        if(front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
//        printf("\n Inserted -> %d", element);
    }
}


int deQueue()
{
    int element;
    if(isEmpty()) {
        printf("\n Queue is empty !! \n");
        return(-1);
    } else {
        element = items[front];
        if (front == rear){
            front = -1;
            rear = -1;
        } /* Q has only one element, so we reset the queue after dequeing it. ? */
        else {
            front = (front + 1) % SIZE;

        }
//        printf("\n Deleted element -> %d \n", element);
        return(element);
    }
}




void display()
{
    cout<<"displaying"<<endl;
    int i;
    if(isEmpty()) printf(" \n Empty Queue\n");
    else
    {

        for( i = front; i!=rear; i=(i+1)%SIZE) {
            printf("%d ",items[i]);
        }
        printf("%d ",items[i]);

    }
}
};


int top=-1;

int counter=0;

int stackArr[1000];

void push(int x){

stackArr[++top]=x;

counter++;

}

int is_empty(){

if(top<0){

    return 1;

}else{return 0;}

}

void pop(){

if(is_empty()){



}else{

cout<<stackArr[top]<<endl;

top--;

counter--;

}

}



void dis(){

for(int i=top;i>=0;i--){

    cout<<stackArr[i]<<" ";

}

}
int main()
{
    int n=5;
   Queue q1;
    int arr[]={1,2,4,5,6};


    return 0;
}

