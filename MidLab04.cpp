#include<bits/stdc++.h>
using namespace std;
class Triangle
{
public:
    int a,b,c;
    double area,peri,s;
    Triangle(int a,int b,int c)
    {
        s=(a+b+c)/2;
        area= sqrt((s-a)*(s-b)*(s-c));
        peri=(a+b+c);
    }
    void show()
    {
        cout<<"Area = "<<area<<endl;
        cout<<"Perimeter = "<<peri<<endl;
    }
} ;
int main()
{
    Triangle obj(3,4,5);
    obj.show();
    return 0;
}
