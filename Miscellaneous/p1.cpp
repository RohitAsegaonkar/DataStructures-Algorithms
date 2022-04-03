#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    int l,b,h;
    public:
        Box(){
            l = b = h =0;
        }
        Box(int x, int y, int z){
            l = x; b = y; h = z;
        }
        int getLength(){
            return(l);
        }
        int getBreadth(){
            return(b);
        }
        int getheight(){
            return(h);
        }
        Box(Box &B){
            l = B.getLength();
            b = B.getBreadth();
            h = B.getheight();
        }
        long long CalculateVolume(){
            long long temp;
            temp = l * (long long)b * h;
            return(temp);
        }
        bool operator< (Box t){
            if((l < t.getLength()) | (b < t.getBreadth() & l == t.getLength()) | (h < t.getheight() & b == t.getBreadth() & l == t.getLength())){
                return true;
            }
            else{
                return false;
            }
        }
     friend ostream& operator<<(ostream &dout,Box &b1){
            cout<<b1.l<<" "<<b1.b<<" "<<b1.h;
            return dout;
        }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}