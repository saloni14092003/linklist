//reverse a linklist. using recursion 2 pointer

#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*first=NULL;

void create(int a[], int n){
    struct Node*temp,*last;
    first = new Node;
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
void reverse(struct Node*q,Node*p){
    if(p!=NULL){
        reverse(p,p->next);
        p->next=q;
    }
    else
    first=q;
}

void display(struct Node*p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main(){
    int array[]={1,6,7,8,9,3};
    create(array,6);
    reverse(NULL,first);
    display(first);
    return 0;
}
