/ insert a element in the doubly linklist 
#include<iostream>
using namespace std;
struct Node{
    struct Node*prev;
    int data;
    struct Node*next;
}*first=NULL;
void create(int array[],int n){
    struct Node*temp,*last;
    first=new Node;
    first->prev=NULL;
    first->data=array[0];
    first->next=NULL;
    last=first;
  for(int i=1;i<n;i++){
      temp=new Node;
      temp->prev= last;
      temp->data=array[i];
      temp->next=last->next;
      last->next=temp;
      last=temp;
  }
}
int length(struct Node*p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void insert(struct Node *p,int pos,int x){
    struct Node*t;
    if(pos<0 || pos>length(first)){
      return ;  
    }
    if(pos==0){
        t=new Node;
        t->prev=NULL;
        t->data=x;
        t->next=first;
        first->prev=t;
        first=t;
    }
   else{
       for(int i=0;i<pos-1;i++){
           p=p->next;
       }
       t=new Node;
       t->prev=p;
       t->data=x;
       t->next=p->next;
       if(p->next){
           p->next->prev=t;
           p->next=t;
       }
   } 
}
void display(struct Node*p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int array[]={4,7,5,3,1};
    create(array,5);
    insert(first,3,14);
    display(first);
    return 0;
}
