// find the minimum element in the linklist with the help of recurssion

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

int min_recursion(struct Node* p){
    int x=0;
    if(p==0){
        return INT_MAX;
    }
    else{
        x=min_recursion(p->next);
        if(p->data<x)
          return p->data;
          return x;
    }
    
}
int main(){
    int a[]={9,8,5,2,12};
    create(a,5);
    cout<<min_recursion(first);
    return 0;
}
