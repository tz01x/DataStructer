
#include<iostream>
#include<string>
#include<vector>
#include<math.h>
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
int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
///stack class for evaluating postfix
class Stack_int
{
private:
    float stack[100];
    int top;
public:
    Stack_int()
    {
        this->top=-1;
    }
    int isEmpty()
    {
        if(top==-1)
        {
            return 1;
        }
        return 0;
    }
    void mkEmpty()
    {
        top=-1;
    }
    void push(float x)
    {
        stack[++top]=x;
    }
    float pop()
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
    float peek()
    {

        return stack[top];
    }


};
float do_operation(float x,float y,string o)
{
    if(o=="+")
    {
        return x+y;
    }
    else if(o=="/")
    {
        return x/y*1.0;
    }
    else if(o=="-")
    {
        return x-y;
    }
    else if(o=="*")
    {
        return x*y;
    }
    else if(o=="^")
    {
        return pow(x,y);
    }
}
void EvaluatePOSTFIX(vector<string> a)
{
    Stack_int stack_obj;
//cout<<str.size()<<endl;
    int len=a.size();
    for(int i=0; i<len; i++)
    {
        if(a[i]=="+"||a[i]=="*"||a[i]=="-"||a[i]=="/"||a[i]=="^")
        {
            float op2=stack_obj.pop();
            float op1=stack_obj.pop();
            float res = do_operation(op1,op2,a[i]);
            stack_obj.push(res);
        }
        else
        {
            if(a[i]!=" "&&a[i]!="")
            {

                float temp=(float)stoi(a[i]);

                stack_obj.push(temp);
            }

        }

    }
    cout<<stack_obj.peek()<<endl;

}
int postFix(string a="((1+2/2)*8)")///set a="((1+2/2)*8)" as default
{
    cout<<a<<endl;

    string str;
    vector<string>str_arr;
    int n=a.length();
    for (int i=0; i<n; i++)
    {
        if(a[i]=='(')
        {
            str="";
            push(a[i]);
        }
        else if(a[i]==')')
        {
            str_arr.push_back(str);
            //cout<<str<<" ";
            str="";

            while(!isEmpty())
            {
                if(peek()=='(')
                {
                    pop();///poping '('
                    break;
                }
                else
                {
                    char temp=pop();///here poping + - * /
                   // cout<<temp;
                    string str_temp(1,temp);///character to string convert
                    str_arr.push_back(str_temp);

                }

            }
        }
        else if((a[i]=='+'||a[i]==42||a[i]=='-'||a[i]==47||a[i]=='^'))
        {
            if(str!=""){
            str_arr.push_back(str);
           // cout<<str<<" ";
            }
            str="";

            if(isEmpty())///if stack is empty
            {
                push(a[i]);

            }
            else
            {
                while(prec(peek())>=prec(a[i])){/// ex: if (* >= - ) which is true
                        /**
                        *if stack top item(char) is grater or equal then current char
                        */
                    char temp=pop();///here poping + - * /
                    //cout<<temp;
                    string str_temp(1,temp);///character to string convert
                    str_arr.push_back(str_temp);
                }
                push(a[i]);


            }
        }
        else
        {
            str+=a[i];
           // cout<<a[i]<< " ";//print
        }
        if(i==n-1){
            str_arr.push_back(str);
        }

    }

    while(!isEmpty())
    {
       char temp=pop();
       //cout<<temp;
        string str_temp(1,temp);;///character to string convert
        str_arr.push_back(str_temp);
    }
    cout<<endl;
    for(int i=0; i<str_arr.size(); i++)
    {
        cout<<str_arr[i]<<" ";
    }
    cout<<endl;
    EvaluatePOSTFIX(str_arr);


}

int main(){
postFix();
}
