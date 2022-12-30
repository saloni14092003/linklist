//merge 2 sorted linklist
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*first=NULL,*second=NULL,*third=NULL;
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
void create2(int a[],int n){
    struct Node *temp,*last;
    second=new Node;
    second->data=a[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<n;i++){
        temp=new Node;
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
void merge(struct Node*p,struct Node*q){
    struct Node *last;
    if(p->data<q->data){
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p!=NULL){
        last->next=p;
    }
    else{
        last->next=q;
    }
}
void display(struct Node*p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main(){
    int arr[]={2,8,10,15};
    int arr2[]={4,7,12,14};
    create(arr,4);
    create2(arr2,4);
    merge(first,second);
    display(third);
    return 0;
}
