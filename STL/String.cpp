#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Mon Feb 21 2022
 *  File : String.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/

int main(){
    string s1;
    //getline(cin,s1);                                    //TO get total line input with spaces
    s1.assign("Flower");                                    // assign() Member function
    s1.append(" Samjha");                                   // append() Member function
    s1.insert(4," kya?");                                 // insert() Member function
    s1.replace(4,5,"");                                   // replace() Member function
    //s1.erase();                                         // erase() Member function
    int i = s1.find("Fire Hai, ");
    int j = s1.rfind("Fire");
    char str[20];
    strcpy(str,s1.c_str());
    s1.substr();
    cout<<s1[3];                        // c_str() Member function: string to char array
    cout<<s1<<i<<" "<<j<<" "<<str<<" "<<s1.size()<<endl;
    return 0;
}