#include<iostream>
#include<stdlib.h>
using namespace std;
class figure
{
    int l;
    int b;
  public:
    figure(int x,int y)
    {
       l=x;
       b=y;
    }
    figure(int x)
    {
       l=x;
       b=x;
    }
    float area;
    void area1(int l, int b);
    void area2(int l);
    void printr();
    void prints();
};

    void figure:: area1(int l,int b)
    {
       area = l * b;
    }
    void figure:: area2(int l)
    {
       area = l * l;
    }
    void figure:: printr()
    {
       cout<<"\nArea of the rectangle is: "<<area;
    }
    void figure:: prints()
    {
        cout<<"\nArea of the square = ";
        cout<<area;
    }

int main()
{
   int l,b,s,ch;
   char answer;
   do
   {
       cout<<"\nMain Menu"<<"\1.Area of Rectangle"<<"\n2.Area of Square"<<"\n3.Exit"<<"\nEnter your choice: ";
       cin>>ch;
       switch(ch)
       {
            case 1: cout<<"\nEnter the length of the rectangle = ";
		            while(!(cin>>l))
                    {
                        cin.clear();
                        cin.ignore(100,'\n');
                        cout<<"\nInvalid input";
                    }
                    cout<<"\nEnter the breadth of the rectangle = ";
                    while(!(cin>>b))
                    {
                        cin.clear();
                        cin.ignore(100,'\n');
                        cout<<"\nInvalid input";
                    }
                    figure f1(l,b);
                    f1.area(l,b);
                    f1.printr();
                    break;
            case 2: cout<<"\nEnter the side of the square = ";
                    while(!(cin>>s))
                    {
                        cin.clear();
                        cin.ignore(100,'\n');
                        cout<<"\nInvalid input";
                    }
                    figure f2(s);
                    f2.area(s);
                    f2.prints();
                    break;
            case 3: exit(0);
                    break;
            default:   cout<<"WRONG INPUT";
                       break;
       }
       cout<<"DO YOU WANT TO CONTINUE (y/n) = ";
       cin>>answer;
   }while(answer=='Y'||answer=='y');
   return 0;
}
