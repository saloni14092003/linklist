//check lisnklist is sorted or not
#include<iostream>
#include<climits>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*first=NULL;
void create(int a[],int n){
    struct Node *temp,*last;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        temp=new Node;
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
int is_sorted(struct Node*p){
    int x= INT_MIN;
    while(p){
        if(p->data<x)
          return false;
        else
          x=p->data;
          p=p->next;
    }
    return true;
}
void display(struct Node*p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int array[]={20,40,90,100,120};
    create(array,5);
    if(is_sorted(first)){
        cout<<"Yes linklist is sorted"<<endl;
    }
    else{
        cout<<"Linklist is not sorted"<<endl;
    }
    display(first);
    return 0;
}
