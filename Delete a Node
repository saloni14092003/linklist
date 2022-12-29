//delete a node
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*first=NULL;
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
int Delete(struct Node *p,int pos){
    struct Node *q;
    int x=-1;
    if(pos==1){
        x=first->data;
        p=first;
        first=first->next;
        delete(p);
    }
    else{
        p=first;
        q=NULL;
        for(int i=0;i<pos-1 && p;i++){
            q=p;
            p=p->next;
        }
        if(p){
            q->next=p->next;
            x=p->data;
            delete(p);
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
int main(){
    int array[]={20,10,8,4,9};
    create(array,5);
    Delete(first,1);
    display(first);
    return 0;
}
