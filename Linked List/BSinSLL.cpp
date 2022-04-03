#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Sat Oct 23 2021
 *  File : BSinSLL.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
typedef struct node
{
    int data;
    struct node *next;/* data */
} node;

node* mid(node * s){
    node *p;
    p=s;
    while (p!= nullptr && p->next!=nullptr && p->next->next!=nullptr)
    {
        p = p->next->next;
        s = s->next;/* code */
    }
    return(s);
}

node * BS(node* s, int x){
    node * m;
    if(s->next == nullptr){
        if(x==s->data){
            return(s);
        }
        else{
            return(nullptr);
        }
    }
    else{
        m = mid(s);
        if(m->data == x){
            return(m);
        }
        else{
            if(x < m->data){
                m->next = nullptr;
                BS(s,x);
            }
            else{
                BS(m->next,x);
            }
        }
    }
}

node *CreateLinkedList(){
     node a = {10,nullptr};
     node b = {20,nullptr};
     node c = {30,nullptr};
     node d = {40,nullptr};
     node e = {50,nullptr};
     node f = {60,nullptr};
     node g = {70,nullptr};
     node h = {80,nullptr};

     node *s = &a;
     node* q;

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = &f;
    f.next = &g;
    g.next = &h;


    q = BS(s,50);
    cout<<"Element to be searched is at: "<<q<< " and data at this is: "<<q->data<<endl;

    return s;
}
int main(){
    CreateLinkedList();
    return 0;
}