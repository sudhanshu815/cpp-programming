#include<iostream>
using namespace std;

int swap_value(int a , int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Inside function call:"<<a<<" "<<b<<"\n";
}
int main()
{
    int a,b;
    cout<<"Enter a number:";
    cin>>a>>b;
    cout<<"before call:"<<a<<" "<<b<<"\n";
    swap_value(a,b);
    cout<<"after call:"<<a<<" "<<b;
}