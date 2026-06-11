#include<iostream>
using namespace std;

class Student
{
    public:
    int student_id()
    {
        char Name;
        int roll_no;

        cout<<"Enter student name:";
        cin>>Name;

        cout<<"\n"<<"Enter student Roll:";
        cin>>roll_no;


        cout<<"Name of student:"<<Name<<"\n";
        cout<<"Roll of student:"<<roll_no<<"\n";
    }

};

class Result : public Student 
{
    public:
    int marks()
    {
        int math , hindi , english; 
        int Total=0;   

        cout<<"\n"<<"Enter math mark:";
        cin>>math;

        cout<<"\n"<<"Enter hindi mark:";
        cin>>hindi;

        cout<<"\n"<<"Enter english mark:";
        cin>>english;

        Total=math+hindi+english;
        cout<<"Total Marks :"<<Total;

    }
};

int main()
{
     Result R;
     R.student_id();
     R.marks();
}
