#include<bits/stdc++.h>
using namespace std;
/* 1.Created Singly Linked List in Stack Area.
   2.RASNL - Return Address of Second Last Node Function.
*/
struct node
{
    int data;
    struct node *next;/* data */
};
struct node* RASLN(struct node* s){
    if(s==nullptr || s->next==nullptr){
        return(NULL);
    }
    while(s->next->next!=nullptr){
        s=s->next;
    }
    cout<<s->data<<endl;
    return(s);
}
struct node *CreateLinkedList(){
    node a = {10,nullptr};
    node b = {20,nullptr};
    node c = {30,nullptr};
    node d = {40,nullptr};
    node e = {50,nullptr};

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;

    struct node *s = &a;

    s = RASLN(s);

    return s;
}
int main(){
    cout<<CreateLinkedList()<<endl;
    return 0;
}