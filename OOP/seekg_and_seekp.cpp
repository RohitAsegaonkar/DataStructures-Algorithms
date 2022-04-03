#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Feb 15 2022
 *  File : seekg_and_seekp.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    ifstream fin;
    ofstream fout;
    /*fin.open("tellg_and_tellp.txt");
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(0);
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;
    cout<<fin.tellg()<<endl;
    fin.seekg(-5,ios_base::end);
    cout<<fin.tellg()<<endl;
    cout<<(char)fin.get()<<endl;*/
    fout.open("tellg_and_tellp.txt", ios::ate | ios::app);
    cout<<fout.tellp()<<endl;
    fout<<"I Love You!";
    cout<<fout.tellp()<<endl;
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp()<<endl;
    fout.close();
    return 0;
}