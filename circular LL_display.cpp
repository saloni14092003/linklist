//circular linklist display
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
    display(Head);
    return 0;
}
