#include<iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

}s2;

int main()
{
    
    s2.name="Zeno";
    s2.age=21;
    s2.display();
    return 0;
}