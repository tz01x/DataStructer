#include<iostream>
using namespace std;

int arr[500]={0};
int count=0;

int swap(int curr,int treget){
    int temp=arr[curr];
    arr[curr]=arr[treget];
    arr[treget]=temp;
}
int reheapdown(int position,int lastposition){
    int leftchild=position*2;
    int rightchild=position*2+1;
    int child=0;

    if((rightchild<=lastposition)&&(arr[rightchild]>arr[leftchild])){

        child=rightchild;

    }else{
    child=leftchild;
    }

    if(arr[child]>arr[position]){

        swap(child,position);
        reheapdown(child,lastposition);

    }

}
int reheapup(int position){

    if (position>1)
    {
       int parent=position/2;
        if(arr[parent]<arr[position]){
            swap(parent,position);
            reheapup(parent);

        }

    }else{
        return position;
    }

}
buildHeap(int data[],int s){

    for(int i=1;i<=s;i++){
            ++count;
        arr[count]=data[i];
        reheapup(count);

    }
}
int deleteheap(){
    if(cout<0)
        return 0;
    cout<<arr[1]<<endl;
    arr[1]=arr[count];
    count--;
    reheapdown(1,count);

}
displayheap(void){
for(int i=1;i<=count;i++){
        cout<<arr[i]<< " ";

    }

}


int main(){
int n;
cin>>n;
int list[n];
for (int i=1 ;i<=n;i++){
    cin>>list[i];
}
buildHeap(list,n);
displayheap();
cout<<endl;
while(deleteheap()){
    cout<<"deleting heap"<<endl;

    //displayheap();
}


}
