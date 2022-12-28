//insert element in linklist
#include<iostream>
#include <climits>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*first=NULL;
void create(int a[],int n){
    struct Node *temp,*last;
    first= new Node;
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
void insert(struct Node*p,int pos,int x){
    struct Node *t;
    if(pos==0){
        t=new Node;
        t->data=x;
        t->next=first;
        first=t;
    }
    else if(pos>0){
        t=new Node;
        t->data=x;
        for(int i=0;i<pos-1 && p;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}
void display(struct Node*p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    struct Node*temp;
    int a[]={8,9,3,4,2};
    create(a,5);
    insert(first,5,50);
    display(first);
    return 0;
}
