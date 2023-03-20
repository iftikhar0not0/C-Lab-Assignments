#include<bits/stdc++.h>
using namespace std;
class Area
{

public:
    int a,b;
 double area;
 setDim(int x,int y)
 {
 a=x;
 b=y;
 }
 double getArea()
 {
 area=a*b;
 return area;
 }
} ;
int main()
{
 int x,y;
 cin>>x>>y;
 Area obj;
 obj.setDim(x,y);
 cout<<obj.getArea()<<endl;
 return 0;
}
