//delete a element from doubly linklist
#include<iostream>
#include<climits>
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
int Delete(struct Node*p,int index){
    struct Node*q;
    int x =-1;
    if(index<1 || index>length(p)){
    return -1;
    }
    if(index==0){
        first=first->next;
        if(first)
          first->prev=NULL;
          x=p->data;
          delete(p);
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
            p->prev->next=p->next;
            if(p->next){
                p->next->prev=p->prev;
                x=p->data;
                delete(p);
            }
       }
    }
    return x;
}

void display(struct Node*p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    int array[]={4,7,5,3,1};
    create(array,5);
    Delete(first,3);
    display(first);
    return 0;
}
