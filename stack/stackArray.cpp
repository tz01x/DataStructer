#include<iostream>
#include<stdlib.h>
#define null  NULL
using namespace std;
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

int main(){
    int n;
    cin>>n;
    for(int i=1;n>0;i++){

        if(n%2==0){
            push(0);
        }else{
           push(1);
        }

      n=n/2;
    }
   dis();
}
