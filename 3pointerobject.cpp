#include<iostream>
using namespace std;


class Student{
        public:
        int age;
        string name;
        void display(){
            cout<<name<<endl<<age<<endl;

        }


};
int main(){

        Student s1;
        s1.name="zeno";
        s1.age=20;
        Student *ptr = &s1;
        ptr->display();
        return 0;


}