#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Sat Feb 19 2022
 *  File : Vector.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    /*vector <int> v0;                               // Zero Length Vector i.e Capacity = 0
    vector <int> v1 {1,4,7,5};
    vector <char> v2(4);
    vector <int> v3(5,10);
    vector <string> v4(3,"Focus");
    for(int i = 0; i<3; i++)
        cout<<v4[i]<<endl;*/
    vector <int> v1;
    cout<<"Current Capacity of Vector is "<<v1.capacity()<<endl;
    for(int i =0; i<10 ; i++)
        v1.push_back(10*(i+1));
    cout<<"Current Capacity of Vector is "<<v1.capacity()<<endl;
    cout<<"Total ELements in the Vector are  "<<v1.size()<<endl;
    //v1.pop_back();
    cout<<"Current Capacity of Vector is "<<v1.capacity()<<endl;
    cout<<"Total ELements in the Vector are  "<<v1.size()<<endl;
   // v1.clear();
    cout<<"Current Capacity of Vector is "<<v1.capacity()<<endl;
    cout<<"Total ELements in the Vector are  "<<v1.size()<<endl;

    vector <int> :: iterator itr = v1.begin();
    v1.insert(itr +3,35);
    for(int i = 0; i<v1.size(); i++)
        cout<<v1[i]<<endl;
    return 0;
}