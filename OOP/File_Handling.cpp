#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Tue Feb 15 2022
 *  File : File_Handling.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    char ch;
   /* ofstream fout;
    fout.open("MyFile.dat",ios::binary);
    fout<<"S,\nILY!";
    fout.close();*/
    ifstream fin;
    fin.open("MyFile.dat", ios::in|ios::binary);
    fin>>ch;
    while(!fin.eof()){
        cout<<ch;
        fin>>ch;
    }
    cout<<endl;
    fin.close();
    return 0;
}