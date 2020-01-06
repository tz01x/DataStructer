#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string fun(string s,char car,int start,int endpoint){
    static string newstring="";
if(start==endpoint) return "";
if(s[start]!=car){

    newstring=newstring+s[start];
}
fun(s,car,start+1,endpoint);
return newstring;
}
int main(){
  string s="hello every one " ;
  cout<<fun(s,'e',0,s.size()-1);
}
