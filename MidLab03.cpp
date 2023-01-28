#include<bits/stdc++.h>
using namespace std;
class Triangle
{
public:
    int a=3,b=4,c=5;
    double area,perimeter,s;
    void info()
    {
        s=(a+b+c)/2;
        area= sqrt((s-a)*(s-b)*(s-c));
        perimeter=(a+b+c);
        cout<<"Area = "<<area<<endl;
        cout<<"Perimeter = "<<perimeter<<endl;
    }
};
int main()
{
    Triangle obj;
    obj.info();
    return 0;
}
