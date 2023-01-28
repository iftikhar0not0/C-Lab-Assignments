#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
public:
    int a,b;
    double area;
    Rectangle(int x,int y)
    {
        a=x;
        b=y;
    }
    double Area()
    {
        area=a*b;
        return area;
    }
} ;
int main()
{
    Rectangle obj1(4,5),obj2(5,8);
    cout<<obj1.Area()<<endl;
    cout<<obj2.Area()<<endl;
    return 0;
}
