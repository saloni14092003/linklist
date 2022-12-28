#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*first=NULL;
void create(int a[],int n){
    struct Node *temp, *last;
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
void insert_sorted(struct Node *p,int x){
    struct Node*t,*q=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;
    if(first==NULL){
       first=t;
    }
    else{
        while(p && p->data<x){
            q=p;
            p=p->next;
        }
    if(p==first) {
        t->next=first;
        first=t;
    }  
    else
    {
        t->next=q->next;
        q->next=t;
    }
    }
}
void display(struct Node*p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int a[]={20,30,40,50,60};
    create(a,5);
    insert_sorted(first,35);
    display(first);
    return 0;
}
