
#include<iostream>
#include<string>
using namespace std;
char stack[100];
int top=-1;
int isEmpty(){
if(top==-1){
    return 1;
}return 0;
}
void push(char x)
{
    stack[++top]=x;
}
char pop(){
    if(isEmpty()){

    }else{

int temp=top;
top--;
return stack[temp];
} }
char peek(){

return stack[top];
}

int main(){
string a="(a+b)*c-d*f+c)";
int n=a.length();
for (int i=0;i<n;i++){
    if(a[i]=='('){
        push(a[i]);
       }else if(a[i]==')'){
           while(!isEmpty()){
                    if(peek()=='('){
                        pop();
                        break;
                       }else{
                            cout<< pop();
                       }

                 }
       }else if(a[i]>='a'&&a[i]<='z'){
       cout<<a[i];
       }else{
       push(a[i]);
       }

}

while(!isEmpty()){
    cout<<pop();
}

}

