//Statement:-Construct a fruit class and display its details
// with the help of constructor class
//Topics covered-constructor class
#include <iostream>
#include<cstring>
using namespace std;
class Fruit{
    public:
    char fruit_name[20];
    Fruit();
    void input();
    void output();
};
Fruit::Fruit(){}
void Fruit::input(){
    cout<<"Enter the name of Fruit:"<<endl;
    cin>>fruit_name;
}
void Fruit::output(){
    if(strcmp(fruit_name,"banana")==0)
    {
        cout<<"Color:-Yellow\n";
        cout<<"Taste:-Sweet\n";
        cout<<"cost:-$4 kg"<<endl;
    }
    else if(strcmp(fruit_name,"mango")==0)
    {
        cout<<"Color:-Orange\n";
        cout<<"Taste:-Sweet and Sour\n";
        cout<<"cost:-$6 kg"<<endl;
    }
    else{
        cout<<"Properties not found"<<endl;
    }
}

int main(){
      Fruit object;
      object.input();
      object.output();
      return 0;
}