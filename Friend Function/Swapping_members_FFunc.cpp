//C++ Program to swap two members using Friend Function

#include<iostream>
using namespace std;

class Class1;

class Class2{
   private:
   int numB;
  
   public:
   Class2(int k){k=numB;}
    friend void swap(Class1 a,Class2 b);
};
class Class1{
    private:
    int numA;
   
    public:
    Class1(int j){j=numA;}
     friend void swap(Class1 a,Class2 b);
};

void swap(Class1 a,Class2 b){
    int temp;
    cout<<"Before swapping object 1 was: "<<a.numA<<" and object 2 was:"<<b.numB<<endl;
    temp=a.numA;
    a.numA=b.numB;
    b.numB=temp;
    cout<<"After swapping object 1 is: "<<a.numA<<" and object 2 is: "<<b.numB<<endl;
}

int main(){
    Class1 x=15;
    Class2 y=95;
    swap(x,y);
    return 0;

}