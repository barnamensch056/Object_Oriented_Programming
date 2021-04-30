//Program to add two complex numbers using friend function
#include<iostream>
using namespace std;

class Complex{
    int real,imag;
    public:
    void set(){
        cout<<"Enter real and imaginary part of the complex numbers:"<<endl;
        cin>>real>>imag;
    }
    friend Complex add(Complex,Complex);
    void display(){
        cout<<"the sum of the complex numbers is "<<real<<"+i"<<imag;}
    };
    Complex add(Complex a,Complex b){
        Complex c;
        c.real=a.real+b.real;
        c.imag=a.imag+b.imag;
        return c;}
    
    int main(){
        Complex a,b,c;
        a.set();
        b.set();

        c=add(a,b);
        c.display();
        return 0;
    }
