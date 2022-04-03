#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Fri Feb 18 2022
 *  File : Nested_Class.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class Student {
    int roll_no;
    char name[20];
    class Address{                                                      // Nested Class
        int house_no;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
        public:
            void setAddress(int h, char *s, char *c, char *st, char *p){
                house_no = h;
                strcpy(street,s);
                strcpy(city,c);
                strcpy(state,st);
                strcpy(pincode,p);
            }
            void showAddress(){
                cout<<"House No: "<<house_no<<endl<<"STREET: "<<street<<endl<<"CITY: "<<city<<endl<<"STATE: "<<state<<endl<<"PINCODE: "<<pincode<<endl;
            }

    };
    Address add;
    public:
        void setroll(int r){
            roll_no = r;
        }
        void setname(char *n){
            strcpy(name,n);
        }
        void setaddress(int h, char *s, char *c, char *st, char *p){
            add.setAddress(h,s,c,st,p);
        }
        void showstudent(){
            cout<<"ROLL NO: "<<roll_no<<endl<<"NAME: "<< name << endl;
            add.showAddress();
        }
};
int main(){
    Student s1;
    s1.setroll(9);
    s1.setname((char*)"Rohit");   // Typecasted to char pointer because ISO C++ forbids converting a string constant to ‘char*’
    s1.setaddress(86,(char*)"old Pedgaon Road",(char*)"Parbhani",(char*)"Maharashtra",(char*)"431401");
    s1.showstudent();
    return 0;
}