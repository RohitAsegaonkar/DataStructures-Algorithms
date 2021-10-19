#include<bits/stdc++.h>
using namespace std;

int main(){
     struct Student
    {
        int a;
        float b;
        char c;/* data */
    };
    
    static Student s1;
    s1.a = 12;
    s1.c = 'd';
    s1.b = 0.2;
    cout<<s1.c<<" "<<s1.b;
    return 0;
}