#include<iostream>
using namespace std;
#define sizearr(a) sizeof(a)/sizeof(a[0])
int heap[100]={0};
swap(int parent_index,int child_index){
int temp=heap[parent_index];
heap[parent_index]=heap[child_index];
heap[child_index]=temp;
}
int maxHeap(int position){
if(position>1){
    int parent=position/2;
    if(heap[parent]<=heap[position]){
        swap(parent,position);
        maxHeap(parent);
    }

}else{
return position;
}
}
int minHeap(int position){
if(position>1){
    int parent=position/2;
    if(heap[parent]>heap[position]){
        swap(parent,position);
        minHeap(parent);
    }

}else{
return position;
}
}
int inseartData(int *list,int size){

for(int i=1;i<=size;i++){

    heap[i]=list[i];
    minHeap(i);
}

}
display(){
for(int i=1;heap[i]!=0;i++){
        cout<<heap[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    int list[n];
    for(int i=1;i<=n;i++){

        cin>>list[i];
    }
    inseartData(list,sizeof(list)/sizeof(list[1]));
    display();
}
