#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string Name;
    string Roll;
    string phn_no;
    string add;

    void info()


    {
        cin>>Name>>Roll>>phn_no>>add;
        cout<<Name<<endl;
        cout<<Roll<<endl;
        cout<<phn_no<<endl;
        cout<<add<<endl;
    }
};
int main()
{
    Student obj1,obj2;
    obj1.info();
    obj2.info();
    return 0;
}

