// find the sum of nodes in a linklist recursivaly
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
int sum_recursivaly(struct Node*p){
    if(p==NULL)
        return 0;
        return sum_recursivaly(p->next)+p->data;
}
int main()
{
   int a[]={4,2,1,6,2,3};
   create(a,6);
   cout<<sum_recursivaly(first);
    return 0;
}
