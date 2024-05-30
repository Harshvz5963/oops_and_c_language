#include<iostream>
using namespace std;

class student
{
private:
    int cgpa;
    int age;
public:
    int number;
    int mobilenum;
    void setdata(int cgpa,int age);
    void getdata()
    {
        cout<<"the cgpa is:-"<<cgpa<<endl;
        cout<<"the age is:-"<<age<<endl;
        cout<<"the number is:-"<<number<<endl;
        cout<<"the mobile number is:-"<<mobilenum<<endl;
    }
};

void student :: setdata(int cgpa1 , int age1)
{
    cgpa=cgpa1;
    age=age1;

}

int main()
{
    student harsh;
    int number= 230760107142;
    int mobilenum= 8469489734;
    harsh.setdata( 9.13 , 17 );
    harsh.getdata();

    return 0;
}