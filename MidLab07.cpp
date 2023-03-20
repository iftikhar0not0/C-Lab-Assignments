#include<bits/stdc++.h>
using namespace std;
class Area
{
    int a,b;
    double area;
public:
    Area(int x,int y)
    {
        a=x;
        b=y;
    }
    double returnArea()
    {
        area=a*b;
        return area;
    }
} ;
int main()
{
    int x,y;
    cin>>x>>y;
    Area obj(x,y);
    cout<<obj.returnArea()<<endl;
    return 0;
}
