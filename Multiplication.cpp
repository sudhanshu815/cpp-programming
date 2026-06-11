#include<iostream>
using namespace std;
int main(){
    int num,multi=0;
    cout<<"Enter number:";
    cin>>num;
    for (int i = 1; i < 11; i++)
    {
        multi=num*i;
        cout<<multi<<"\n";
    }
    
}
