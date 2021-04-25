#include<iostream>
#include<string.h>

using namespace std;

class student{

public:
    student(){;}
    ~student(){;}
    void stu(int a, string b, int c, int d)
    {
       num=a;
       name=b;
       age=c;
       weight=d;
    }
    void show(){
        cout<<num<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<weight<<endl;
}
private:
           int num;
           string name;
           int age;
           int weight;
};

int main()
{
     student s1;
     s1.stu(1,"wyb",18,50);
     s1.show();
     return 0;
}
