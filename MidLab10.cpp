#include<bits/stdc++.h>
using namespace std;
class Volume
{
    double len,weight,height,vol;
public:
    Volume(double a,double b,double c)
    {
        len=a;
        weight=b;
        height=c;
        vol=len*weight*height;
    }
    void show()
    {
        cout<<len<<endl;
        cout<<weight<<endl;
        cout<<height<<endl;
        cout<<vol<<endl;
    }
};
int main()
{
    double p,q,r;
    cin>>p>>q>>r;
    Volume n(p,q,r);
    n.show();
    return 0;
}
