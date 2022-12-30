//circular linklist delete element
#include<iostream>
#include<climits>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*Head;
void create(int a[],int n){
    struct Node *temp,*last;
    Head=new Node;
    Head->data=a[0];
    Head->next=Head;
    last=Head;
    for(int i=1;i<n;i++){
        temp=new Node;
        temp->data=a[i];
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}
int Length(struct Node *p)
{
 int len=0;
 do
 {
 len++;
 p=p->next;
 
 }while(p!=Head);
 return len;
}
int Delete(struct Node *p,int pos)
{
 struct Node *q;
 int x;
 
 if(pos <0 || pos >Length(Head))
 return -1;
 if(pos==1)
 {
 while(p->next!=Head)p=p->next;
 x=Head->data;
 if(Head==p)
 {
 delete(Head);
 Head=NULL;
 }
 else
 {
 p->next=Head->next;
delete(Head);
 Head=p->next;
 }
 }
 else
 {
 for(int i=0;i<pos-2;i++)
 p=p->next;
 q=p->next;
 p->next=q->next;
 x=q->data;
 delete(q);
 }
 return x;
}


void display(struct Node*p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }
    while(p!=Head);
}
 
int main(){
    struct Node *t1,*t2;
    int array[]={10,20,100,120,190};
    create(array,5);
    Delete(Head,3);
    display(Head);
    return 0;
}
