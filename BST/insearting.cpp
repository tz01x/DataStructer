#include<iostream>
#include<stdlib.h>
using namespace std;
#define null NULL
#define length_arr(arr) sizeof(arr)/sizeof(arr[0])
typedef struct node{
int data;
node* left;
node* right ;
}node;
node * inseart(node *root,int item){
if(root==null){
    root=(node *)malloc(sizeof(node));
    root->data=item;
    root->left=null;
    root->right=null;
}else if(root->data<item){
root->right=inseart(root->right,item);
}else{
root->left=inseart(root->left,item);
}
return root;
}
int hightofBST(node *root){
if(root==null){
    return 0;
}
int left=1+hightofBST(root->left);
int right=1+hightofBST(root->right);
int a=(left==right?left:left<right?right:left);
return a;
}
int hight(node *root){

    if(root==null){
        return 0;
    }
    if(root->left==null&&root->right==null){
            return 0;
    }

    int left=1+hight(root->left);
    int right=1+hight(root->right);


    return (left==right?left:left<right?right:left);;
}
int newhight(node *root){

int left=0,right=0;
if(root->left!=null){
    left=newhight(root->left)+1;
    cout<<root->data<<" left :"<<left<<endl;
}

if(root->right!=null){
  right=newhight(root->right)+1;
  cout<<root->data<<" right : "<<right<<endl;
}



return (left==right?left:left<right?right:left);;

}

int main(){
int size=0;
//cin>>size;
int arr[]={4,6,2,7,9,8,3};
//for(int i=0;i<size;i++){
//    cin>>arr[i];
//}
node *root=null;
for(int i=0;i<length_arr(arr);i++){
 root=inseart(root,arr[i]);
}
cout<<"hight is : "<<newhight(root)<<endl;
}
