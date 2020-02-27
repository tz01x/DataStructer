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
int isempty(){
if(top<0){
    return 1;
}else{return 0;}
}
void pop(){
if(isempty()){

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
int x;
cout<<"enter number "<<endl;
cin>>x;
int v;
while(true){
        if(x==1||x==0){
                push(x);
            break;
        }

    v=x%2;
    x=(int)(x/2);
    push(v);

}
dis();
}
