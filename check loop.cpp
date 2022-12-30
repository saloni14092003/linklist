//check if linklist is having loop or not
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
    int isLoop(struct Node *f)
{
 struct Node *p,*q;
 p=q=f;
 
 do
 {
 p=p->next;
 q=q->next;
 q=q?q->next:q;
 }
 while(p && q && p!=q);
 if(p==q)
 return 1;
 else
 return 0; 
}
int main(){
    struct Node *t1,*t2;
    int array[]={10,20,100,120,190};
    create(array,5);
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    cout<<isLoop(first);
    return 0;
}
