#include<bits/stdc++.h>
using namespace std;

int main()
{

int a,b,c,d,e;

cout<<"Enter the number: "<<endl;
cin>>a;

cout<<"Enter the number: "<<endl;
cin>>b;

cout<<"Enter the number: "<<endl;
cin>>c;

cout<<"Enter the number: "<<endl;
cin>>d;

cout<<"Enter the number: "<<endl;
cin>>e;

if ((a>b) and (a>c) and (a>d) and (a>e))
{    
    cout<<"a is largest"<<endl;
}
else if ((b>a) and (b>c) and (b>d) and (b>e))
{    
  cout<<"b is largest"<<endl;

}
else if ((c>a) and (c>a) and (c>d) and (c>e))
{    
    cout<<"c is largest"<<endl;
}
else if ((d>a) and (d>c) and (d>a) and (d>e))
{    
    cout<<"d is largest"<<endl;
}
else 
{
    cout<<"e is largest"<<endl;
}

}