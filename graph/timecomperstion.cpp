#include<bits/stdc++.h>

using namespace std;
int main(){
clock_t Begin, End; //initial the time

Begin=clock();//begin the time


/// do some operations .........
int i=0;
while(i<5000){

    i++;
}


End=clock();/// end time
cout<<"Computational Time:"<<fixed<<setprecision(2)<<(((double)End-(double)Begin))*pow(10,6)<<" Nanosecond"<<endl;


}
