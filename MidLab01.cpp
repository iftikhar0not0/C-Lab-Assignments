#include<bits/stdc++.h>
using namespace std;
class Student
{
 public:
 string Name;
 int Roll;
 void info()
{
 Name = "Jamshed";
 Roll = 2;
 cout<<Name<<endl;
 cout<<Roll<<endl;
}
};
int main()
{
 Student obj;
 obj.info();
 return 0;
}
