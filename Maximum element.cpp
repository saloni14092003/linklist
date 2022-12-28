// find the maximum element in the linklist
#include <bits/stdc++.h>
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
    for(int i=1;i<n;i++){
        temp=new Node;
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }
}

int max(struct Node*p){
    int m=INT_MIN;
    while(p!=NULL){
        if(p->data>m)
          m=p->data;
          p=p->next;
    }
    return m;
}
int main(){
    int a[]={9,8,5,2,12};
    create(a,5);
    cout<<max(first);
    return 0;
}
