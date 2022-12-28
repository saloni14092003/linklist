#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
}*first=NULL;
void create(int a[],int n){
    struct Node*temp,*last;
    first = new Node;
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
int count(struct Node*p){
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}
int main()
{
   int a[]={4,2,1,6,2,3};
   create(a,6);
   cout<<count(first);
    return 0;
}
