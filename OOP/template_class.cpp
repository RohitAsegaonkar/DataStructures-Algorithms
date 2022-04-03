#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Feb 15 2022
 *  File : template_class.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
template <class X, class Y> class Arraylist{                    // X is a Place Holder
    struct Controlblock{
        int capacity;
        X *arr_ptr;
    };
    Controlblock *s;
    public:
        Arraylist(int capacity){
            s = new Controlblock;
            s->capacity = capacity;
            s->arr_ptr = new X[s->capacity];
        }
        void addelement(int index,X data){
		 	
		 	if (index>=0&&index<=s->capacity-1)
		 	s->arr_ptr[index]=data;
		 	else
		 	cout<<"\narray index is not valid";
		 }
		 void viewelement(int index , X &data){
		 	if (index>=0&&index<=s->capacity-1)
		 	data = s->arr_ptr[index];
		 	else
		 	cout<<"\narray index is not valid";
		 }
		void viewlist(){
			int i;
			for(i=0;i<s->capacity;i++){
				cout<<" "<<s->arr_ptr[i];
			}
            cout<<endl;
		}
 	
 	
 };
 int main()
 {
 	Arraylist <double, int>list1(4);
 	list1.addelement(0,3.9);
    list1.addelement(1,1.3);
    list1.addelement(2,1.2);
    list1.addelement(3,5.5);
 	list1.viewlist();
 	
 }
