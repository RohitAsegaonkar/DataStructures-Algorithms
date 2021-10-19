#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Oct 19 2021
 *  File : InsertNodeBeforeNode.cpp
 *******************************************/
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
   and is added in before a Node with data y of linked list*/
struct node* InsertNodeBeforeNode(struct node* s, char x,char y){
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
    while(s1->data!= y){
        q=s1;
        s1=s1->next;
    }

    p->next = s1;
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

    s = InsertNodeBeforeNode(s,'r','c');
    printSLL(s);
    return s;
}
/* Main Program*/
int main(){
CreateLinkedList();
    return 0;
}