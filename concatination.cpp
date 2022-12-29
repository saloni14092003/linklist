//concatination of a linklist
#include<iostream>
#include<climits>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*first=NULL, *second=NULL, *third=NULL;
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
void concat(struct Node*p,struct Node*q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
        p->next=q;
}
void display(struct Node*p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int array[]={10,20,100,120,190};
    int array2[]={1,2,10,12,19};
    create(array,5);
    create2(array2,5);
    concat(first,second);
    display(third);
    return 0;
}
