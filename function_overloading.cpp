#include<iostream>
using namespace std;

double area(double length, double width){
    return length*width;
}

double area(double side){
    return side*side;
}

int main()
{
    double length,width,a;
    cout<<"length and width:";
    cin>>length>>width;
    cout<<"Area of rectangle:"<<area(length,width)<<"\n";


    double side,b;
    cout<<"side:";
    cin>>side;
    cout<<"Area of square:"<<area(side);

}