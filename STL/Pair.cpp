#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Sat Feb 19 2022
 *  File : Pair.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class Student
{
private:
    string name;
    int age;                                        /* data */
public:
    void setstudent(string s, int a){
        name = s; age = a;
    }
    void showstudent(){
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};

int main(){
    pair <string, int> p1;
    pair <string, string> p2;    
    pair <string, float> p3;
    pair <int, Student> p4;
    
    p1 = make_pair("Rohit",22);                      // make_pair() Member Function
    p2 = make_pair("Cggg", "Rohit");
    p3 = make_pair("Google", 20.092);
    Student s1;
    s1.setstudent("Shivangi", 21);
    p4 = make_pair(1, s1);
    cout<<"Pair1: "<<p1.first<<" & "<<p1.second<<endl;  // first and second are member functions of pair class
    cout<<"Pair2: "<<p2.first<<" & "<<p2.second<<endl;
    cout<<"Pair3: "<<p3.first<<" & "<<p3.second<<endl;
    cout<<"Pair4: "<<p4.first<<" & ";
    Student s2 = p4.second;
    s2.showstudent();
    return 0;
}