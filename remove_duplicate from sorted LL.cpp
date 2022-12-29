//remove dupliczte from sorted linklist
#include<iostream>
#include<climits>
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
void remove_duplicate(struct Node *p){
    struct Node *q;
    p=first;
    q=p->next;
    while(q){
        if(p->data!=q->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
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
    int array[]={20,20,20,100,120,190};
    create(array,6);
    remove_duplicate(first);
    display(first);
    return 0;
}
