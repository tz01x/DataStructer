#include<bits/stdc++.h>
#include<string.h>
using namespace std;
float seris(float n){
if(n==1)
    return 1;
return ((1/n*1.0)+seris(n-1));
}
int main(){
 cout<<seris(10)<<endl;
}

