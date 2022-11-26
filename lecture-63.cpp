#include <iostream>
using namespace std;
class Student
{
private:
    int a;
    int b;

public:
    Student()
    {
        a = 10;
        b = 20;
    }
    friend class Teacher;
};
class Teacher
{
public:
    void PrintA(Student obj)
    {
        cout << "The value of A is :" << obj.a << endl;
    }
    void printB(Student obj)
    {
        cout << "The value of B is :" << obj.b << endl;
    }
};
int main()
{
    Teacher obj;
    Student obj1;
    obj.PrintA(obj1);
    obj.printB(obj1);

    return 0;
}