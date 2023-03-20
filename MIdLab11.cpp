#include<bits/stdc++.h>
using namespace std;
class Employee
{
    string name;
    int year;
    string add;
public:
    Employee(string n,int y,string a)
    {
        name=n;
        year=y;
        add=a;
    }
    void show()
    {
        cout<<name<<" "<<year<<" "<<add<<endl;
    }
};
int main()
{
    Employee shamsu("Shamsu",1992,"Chittagong");
    Employee soleman("Soleman",1994,"Chittagong");
    Employee kalam("Kalam",1990,"Dhaka");
    shamsu.show();
    soleman.show();
    kalam.show();
    return 0;
}
