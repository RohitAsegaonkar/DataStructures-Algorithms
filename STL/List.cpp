#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Sun Feb 20 2022
 *  File : List.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    list <int> l1{11,22,13,64,95,7};
    list <int> *l2;                        // List of Pointers
    l1.sort();
    l1.push_back(77);
    l1.push_front(23);
    list <int>::iterator itr = l1.begin();
    while(itr!=l1.end()){
        cout<<*itr<< " ";
        itr++;
    }
    cout<<"After pushing Done"<<endl;
    l1.sort();
    l1.pop_back();
    l1.pop_front();
    list <int>::iterator itr1 = l1.begin();
    while(itr1!=l1.end()){
        cout<<*itr1<< " ";
        itr1++;
    }
    cout<<endl;
    l1.clear();
    list <int>::iterator itr3 = l1.begin();
    while(itr3!=l1.end()){
        cout<<*itr3<< " ";
        itr3++;
    }
    return 0;
}