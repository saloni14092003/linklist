// find the minimum element in the linklist 

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

int min(struct Node*p){
   int m=3278;
   while(p!=0){
       if(p->data<m)
         m=p->data;
         p=p->next;
   }
   return(m);
}

int main(){
    int a[]={9,8,5,2,12};
    create(a,5);
    cout<<min(first);
    return 0;
}
