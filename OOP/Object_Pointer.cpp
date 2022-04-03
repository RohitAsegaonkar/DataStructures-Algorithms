#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Mon Feb 14 2022 (Happy Valentine's Day)
 *  File : Object_Pointer.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class Box{
    int l,b,h;
    public:
        void setDimensions(int l, int b, int h){
            this->l = l; this->b = b; this->h = h;
        }
        void showDimensions(){
            cout<<"l:"<<l<<" "<<"b:"<<b<<" "<<"h:"<<h<<endl;
        }

};
int main(){
    Box smallBox;
    smallBox.setDimensions(10,20,30);
    smallBox.showDimensions();
    return 0;
}