//1.Using constructor create a class ‘Mark’ which contains the marks of five subjects. ( AND STD DETAILS)
#include<iostream>
using namespace std;
class Marks{
    int marks1[5];
    char  name[30];
    int   rollNo;
    public:
    Marks(int a[5]){
        for(int i=0;i<5;i++){
            marks1[i]=a[i];}
        }
        void input(){
         
          cout<<"Enter students name"<<endl;
          cin>>name;
          cout<<"Enter roll no."<<endl;
          cin>>rollNo;
        }
        void showdetails(){
            cout<<"Name : "<<name<<" ";
            cout<<"Roll No: "<<rollNo<<" ";
            cout<<"Marks are: ";
            for(int i=0;i<5;i++){
            cout<<marks1[i]<<" ";
        }
    }
};
int main(){
    int arr[5];
     cout<<"Enter marks:"<<endl;
          for(int i=0;i<5;i++){
              cin>>arr[i];
          }
    Marks mk(arr);
    mk.input();
    mk.showdetails();
    return 0;
}