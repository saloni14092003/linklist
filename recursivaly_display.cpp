#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node*next;
} *first=NULL;

void create(int a[],int n){
    struct Node*temp,*last;
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
void Recurrsive_Display(struct Node*p){
    if(p!=NULL){
        Recurrsive_Display(p->next);
        cout<<p->data<<" ";
    }
}

int main()
{
   int array[]={1,6,7,8,9,3};
   create(array,6);
   Recurrsive_Display(first);
    return 0;
}
