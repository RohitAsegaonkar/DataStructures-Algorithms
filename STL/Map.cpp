#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Mon Feb 21 2022
 *  File : Map.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    map <int,string> m1;
    m1[100] = "Say";
    m1[200] = "my";
    m1[317] = "name";
    m1[433] = "Heisenberg!!";
    map <int,string> m2 {{1,"I"},{2,"Know"}, {3,"a Guy."}};

    map <int,string> :: iterator itr = m1.begin();
    while(itr!=m1.end()){
        cout<<itr->second<<endl;
        itr++;
    }
    cout<<m1[100]<<endl;
    cout<<m1.at(100)<<endl;
    cout<<m1.size()<<endl;
    cout<<m1.empty()<<endl;
    m1.insert(pair<int,string>(233,"who knows another guy."));
    cout<<m1[233]<<endl;
    m1.clear();
    cout<<m1.size()<<endl;
    return 0;
}