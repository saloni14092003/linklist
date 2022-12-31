//Display a double linklist
#include <iostream>
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
    first->next=first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++){
        temp=new Node;
        temp->data=array[i];
        temp->next=last->next;
        temp->prev=last;
        last->next=temp;
        last=temp;
    }
}
int length(struct Node *p){
    int len=0;
    while(p!=NULL){
        len++;
        p=p->next;
    }
    return len;
}
void display(struct Node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    int a[]={8,9,7,6,3,2};
    create(a,6);
    length(first);
    display(first);
    return 0;
}
