#include<iostream>
using namespace std;
class student{

    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a,int b,int c);
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
   
};

void student :: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
} 

int main()
{
    student harsh;
    harsh.d=29;
    harsh.e=25;
    harsh.setdata(1,2,4);
    harsh.getdata();

    return 0;
}

