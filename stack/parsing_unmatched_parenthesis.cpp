
#include<iostream>
#include<string>
using namespace std;
char stack[100];
int top=-1;
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    return 0;
}
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    if(isEmpty())
    {

    }
    else
    {

        int temp=top;
        top--;
        return stack[temp];
    }
}
char peek()
{

    return stack[top];
}

int main()
{
    string a="(())()";

    int n=a.length();
    for (int i=0; i<n; i++)
    {
        if(a[i]=='(')
        {
            push(a[i]);
        }
        else if(a[i]==')')
        {
            if(isEmpty())
            {

                 cout<<"closing parentheses not matched"<<endl;
                return 0;

            }
            while(true)
            {
                if(isEmpty()==1) break;

                if(peek()=='(')
                {
                    pop();
                    break;
                }


            }
        }


    }
    if(peek()=='('){
       cout<<"open parentheses not end"<<endl;
        exit(0);
       }



}

