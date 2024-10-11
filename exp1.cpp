#include<iostream>
using namespace std;

class student {
    int rollno;
    char name[20];
    public:

    void input() {
        cout<<"Enter roll number and name:";
        cin>>rollno>>name;
    }
    void output() {
        cout<<"roll number:"<<rollno<<"name:"<<name<<endl;
    }
};
int main() {
    student s1, s2;
    s1. input();
    cout<<"\n The details are:\n";
    s1. output();

    s2. input();
    cout<<"The details are:\n";
    s2. output();

    return 0;
}