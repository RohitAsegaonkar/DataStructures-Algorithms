#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Thu Oct 21 2021
 *  File : Deletelastnode.cpp
 *  Contact : https://rohitasegaonkar.github.io/
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
struct node* DeleteNodex (struct node* s, char x){
    struct node* p;
    struct node* s1;

    if(s==nullptr){
        cout<<"Linked List is Empty!"<<endl;
        return(NULL);
    }
    if(s->next==nullptr && s->data == x){
        s = nullptr;
        return(s);
    }
    s1=s;
    while(s1->data!= x && s1->next!=nullptr){
        p=s1;
        s1=s1->next;
    }
    if(s1->data == x){
        p->next = s1->next;
        s1->next = nullptr;
    }
    else{
        cout<<"Data x not found bro!!"<<endl;
        return(s);
    }
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

    s = DeleteNodex(s,'c');
    printSLL(s);
    return s;
}
/* Main Program*/
int main(){
CreateLinkedList();
    return 0;
}