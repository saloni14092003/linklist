//move search element to first 
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
struct Node *linear_search(struct Node*p,int key){
    struct Node*q;
    while(p!=NULL){
        if(key==p->data){
        q->next=p->next;
        p->next=first;
        first=p;
        return p;
        }
          q=p;
          p=p->next;
            
        }
    return NULL;
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
    temp =linear_search(first,2);
    if(temp){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    display(first);
    return 0;
}
