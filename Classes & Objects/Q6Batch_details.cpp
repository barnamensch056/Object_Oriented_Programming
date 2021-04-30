 
#include <iostream>
using namespace std;
 
#define MAX 10
 
class student
{
    private:
        char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
        //member function to get student's details
        void getDetails();
        //member function to print student's details
        void putDetails();
};
 
//member function definition, outside of the class
void student::getDetails(){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
     
    perc=(float)total/500*100;
}
 
//member function definition, outside of the class
void student::putDetails(){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total << ",Percentage:" << perc;
}
 
int main()
{
    student std[MAX];       //array of objects creation
    int n,i;
     
    cout << "Enter total number of students: ";
    cin >> n;
     
    for(i=0;i< n; i++){
        cout << "Enter details of student " << i+1 << ":\n";
        std[i].getDetails();
    }
     
    cout << endl;
     
    for(i=0;i< n; i++){
        cout << "Details of student " << (i+1) << ":\n";
        std[i].putDetails();
    }
     
    return 0;
}