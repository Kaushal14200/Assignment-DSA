#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;


    cin>>a>>b>>c>>d;

    if (a>b && a>c && a>d)
    {
        cout<<a<<endl;
    }
    else if (b>c && b>a && b>d)
    {
        cout<<b<<endl;
    }
    else if (c>a && c>b && c>d)
    {
        cout<<c<<endl;
    }
    else if (d>a && d>b && d>c )
    {
        cout<<d<<endl;
    }
    else if (a==b && a==c && a==d)
    {
        cout<<"The number are equal"<<endl;
    }
    else
    {
        cout<<"No largest number"<<endl;
    }
    
    return 0;
}
