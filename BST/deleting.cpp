#include<bits/stdc++.h>
#define null NULL
using namespace std;
typedef struct node{
int data;
node *left;
node *right;
}node;

node *ins(node *root,int data){
if(root==null){
    root=(node*)malloc(sizeof(node));
    root->data=data;
    root->left=null;
    root->right=null;
}
else if(root->data<data){
    root->right=ins(root->right,data);
}else {
 root->left=ins(root->left,data);
}
return root;
}

node *search(node *root,int key){
if(root==null||root->data==key){
    return root;
}else if(root->data<key){
return search(root->right,key);
}else{
return search(root->left,key);
}
}
int display(node *root){
if(root==null
   )
    return 0;
    cout<<" -> "<<root->data<<endl;

display(root->left);

display(root->right);
}

node * findmini(node *root){
if(root->left==null)
    return root;
return findmini(root->left);
}
node *deleteBSt(node *root,int item){
if(root==null)
    return root;
else if(root->data<item){
    root->right=deleteBSt(root->right,item);
}else if(root->data>item){
root->left=deleteBSt(root->left,item);
}else{
if(root->left==null&&root->right==null){
    root=null;
    return root;
}else if(root->left==null){

return root->right;

}else if(root->right==null){

return root->left;

}else{
    node *temp=findmini(root->right);
    root->data=temp->data;
    root->right=deleteBSt(root->right,temp->data);
    return root ;



}
}
}
int main(){
int n;
cin>>n;
node *root=null;

for(int i=0;i<n;i++){

    int x;
    cin>>x;
    root=ins(root,x);

}
display(root);
int x;
    cin>>x;
deleteBSt(root,x);
display(root);
}
