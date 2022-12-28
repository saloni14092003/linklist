//linear search without recursion
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
    for(int i=0;i<n;i++){
        temp=new Node;
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}
struct Node *linear_search(struct Node*p,int key){
    while(p!=NULL){
        if(key==p->data)
          return p;
          p=p->next;
            
        }
    return NULL;
}
int main(){
    struct Node*temp;
    int a[]={8,9,3,4,2};
    create(a,5);
    temp =linear_search(first,4);
    if(temp){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
