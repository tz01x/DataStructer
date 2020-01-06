#include<iostream>
#include<string>
using namespace std;
char stack[100];
int top=-1;
int isEmpty(){
if (top==-1) return 1;
return 0;
}
char peek(){
return stack[top];
}

void push(char x){

stack[++top];

}
void pop(){
if(!isEmpty()){
    top--;
}else{
cout<<"is empty"<<endl;
}
}

int main(){
 string a="a/b*(c+(d-e))";
    int n=a.length();
    for (int i=0; i<n; i++)
    {
        if(a[i]=='('){
            push(a[i]);
           }else if(a[i]==')'){
           while(!isEmpty()){
            if(!peek()=='('){
                cout<<peek();
                pop();
            }else{
            pop();
            break;
            }
           }

           }
           else if(a[i]=='+'||a[i]==42||a[i]=='-'||a[i]==47||a[i]=='^'){
                while(peek()>= a[i]){
                    cout<<peek();
                    pop();
                    push(a[i]);
                }
                push(a[i]);

           }else{
           cout<<a[i];
           }
    }
    while(!isEmpty()){
    cout<<peek()<<endl;
    pop();
    }

}
