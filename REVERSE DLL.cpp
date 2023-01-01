//reverse of a doubly Link list
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
    first->data=array[0];
    first->prev=first->next=NULL;
    last=first;
  for(int i=1;i<n;i++){
      temp=new Node;
      temp->data=array[i];
      temp->next=last->next;
      temp->prev= last;
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
 
void reverse(struct Node*p){
    struct Node*temp;
    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL){
            first=p;
        }
    }
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
    reverse(first);
    display(first);
    return 0;
}
