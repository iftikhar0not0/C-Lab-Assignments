#include<bits/stdc++.h>
using namespace std;
class Average
{
public:
 static double avg(int x,int y,int z)
 {
 return (x+y+z)/3;
 }
};
int main()
{
 double x,y,z;
 cin>>x>>y>>z;
 cout<<Average::avg(x,y,z)<<endl;
 return 0;
}
