#include<iostream>
using namespace std;
int arr[50]={0};
int counter=0;
swap(int root,int pos){
    int temp=arr[root];
    arr[root]=arr[pos];
    arr[pos]=temp;
}
heapeup(int position){
if(position>1){
    int parant=position/2;
    if(arr[parant]>arr[position]){
        swap(parant,position);
        heapeup(parant);
    }
}
//else {
//return position;
//
}
buildheap(int list[],int n){
for(int i=1;i<=n;i++){
    counter++;
    arr[counter]=list[i];
    heapeup(counter);
}
}
reheapdown(int pos,int lastposition){
int right=pos*2+1;
int left=pos*2;
int child;
if(right<lastposition&&arr[right]<arr[left]){
     child=right;
}else {
child=left;
}
if(arr[child]<arr[pos]){
    swap(child,pos);
    reheapdown(child,lastposition);
}

}
int deleteheape(){
if(counter<0){
    return 0;
}
cout<<arr[1]<<",";

arr[1]=arr[counter];
counter--;
reheapdown(1,counter);
}
display(){
for(int i=1;i<=counter;i++){

    cout<<arr[i]<<" ";
}
}
int main(){
int n;
cin>>n;
int list[n];
for (int i=1;i<=n;i++){
    cin>>list[i];
}
buildheap(list,n);
display();
cout<<endl;
for (int i=0;i<5;i++){
    if(deleteheape()){

    }else{
    break;
    }
}
}
