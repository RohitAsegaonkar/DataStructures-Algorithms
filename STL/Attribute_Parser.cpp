#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Mon Feb 21 2022
 *  File : Attribute_Parser.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
int main() {
    int n,q,i;
    cin>>n>>q;
    vector <string> hrml;
    vector <string> queries;
    string temp;
    cin.ignore();
    
    for(i=0; i<n ; i++){
        getline(cin,temp);
        hrml.push_back(temp);
    }
    for(i=0; i<q ; i++){
        getline(cin,temp);
        queries.push_back(temp);
    }
    map<string, string> m;
    vector<string> tag;
    
    for(i = 0; i<n ; i++){
        temp = hrml[i];
        temp.erase(remove(temp.begin(),temp.end(),'\"'),temp.end());
        temp.erase(remove(temp.begin(),temp.end(),'>'),temp.end());
        
    if(temp.substr(0,2)=="</")
    {
        tag.pop_back();
    }
    else
        {
            stringstream ss;
            ss.str("");
            ss<<temp;
            string t1,p1,v1;
            char ch;
            ss>>ch>>t1>>p1>>ch>>v1;
            string temp1="";
            if(tag.size()>0)
            {
                temp1=*tag.rbegin();
                temp1=temp1+"."+t1;
            }
            else
            {
                temp1=t1;
            }
            tag.push_back(temp1);
            m[*tag.rbegin()+"~"+p1]=v1;
            while(ss)
            {
                ss>>p1>>ch>>v1;
                m[*tag.rbegin()+"~"+p1]=v1;
            }
        }
    }
    for(i=0;i<q;i++)
    {
        if (m.find(queries[i]) == m.end())
        {
            cout << "Not Found!\n";
        }
        else
        {
            cout<<m[queries[i]]<<endl;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
