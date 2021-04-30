#include <iostream>
using namespace std;

class Student{
    private:
    char name[20];
    long int roll_no;
    char sec;
    float total_score;
    float CGPA;
    public:
    void get_student_details();
    void show_student_details();
};
void Student::get_student_details(){
    cout<<"Enter student's name"<<"\nEnter roll number:"<<"\nEnter section:"<<"\nEnter total score of grades out of 50\n";
    cin>>name>>roll_no>>sec>>total_score;
    CGPA=total_score/5;

}
void Student::show_student_details(){
    cout<<"Student details\n";
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No:"<<roll_no<<endl;
    cout<<"Section:"<<sec<<endl;
    cout<<"CGPA:"<<CGPA<<endl;
}
int main(){
    Student std;
    std.get_student_details();
    std.show_student_details();
    return 0;
}