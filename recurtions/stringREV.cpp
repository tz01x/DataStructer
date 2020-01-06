#include<bits/stdc++.h>
#include<string.h>
using namespace std;
string rev(string str,int start,int end){
if(start>end)
    return "";
string newstring= rev(str,start+1,end);
newstring=newstring+str[start];
return newstring;
}
int main(){
    string str="deizmut namhar rudba ";
    int len=str.size()-1;
    cout<<rev(str,0,len)<<endl;
}
