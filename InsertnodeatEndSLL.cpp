#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

/* 1.Created Singly Linked List in Stack Area.
   2.InsertAtEnd() - Insert a node at the End of Singly Linked List.
*/

struct node
{
    char data;
    struct node *next;/* data */
};

/* Printed Singly Linked List Data*/
void printSLL(struct node* s){
    while(s !=nullptr){
        cout<<s->data;
        s=s->next;       
    }
    cout<<endl;
}

/* New node is created in the Heap Area using malloc().
   and is added at the end of linked list*/
struct node* InsertAtEnd(struct node* s, int x){
    struct node* p;
    struct node* s1;
    struct node* q;
    p = (struct node *)malloc(sizeof(struct node));

    if(p == nullptr){
        cout<<"Heap Memory is Full!!!"<<endl;
    }

    p->data=x;
    p->next=nullptr;

    if(s == nullptr){
        s=p;
        return(s);
    }
    s1 = s;
    while(s1!=nullptr){
        q=s1;
        s1=s1->next;
    }

    q->next = p;
    return(s);
}
/* Created Linked list Explicitly by adding manually value.
*/
struct node *CreateLinkedList(){
    struct node a = {'a',nullptr};
    struct node b = {'b',nullptr};
    struct node c = {'c',nullptr};
    struct node d = {'d',nullptr};
    struct node e = {'e',nullptr};

    struct node *s = &a;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    s = InsertAtEnd(s,'r');
    printSLL(s);
    return s;
}
/* Main Program*/
int main(){
CreateLinkedList();
    return 0;
}