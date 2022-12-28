// for counting the nodes recursivally
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
int recursive_count(struct Node*p){
    if(p==0){
        return 0;
    }
    else{
        return recursive_count(p->next)+1;
    }
}
int main()
{
   int a[]={4,2,1,6,2,3};
   create(a,6);
   cout<<recursive_count(first);
    return 0;
}
