//Working of a structure
#include<conio.h>
#include<iostream>
using namespace std;
struct Phone{
     int areacode;
     int exchange;
     int number;
};
int main(){
    Phone p1;
    cout<<"Enter your areacode, exchange and phone number";
    cin>>p1.areacode>>p1.exchange>>p1.number;
    cout<<"Your number is:"<<"+("<<p1.areacode<<")"<<p1.exchange<<p1.number;
    return 0;
}